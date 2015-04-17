function[]=Spline3(x,y,dy,flag)
plot(x,y,'r*');
hold on;
l=length(x);
for i=1:l-1               %计算h(i)
    h(i)=x(i+1)-x(i);
end
for i=2:l-1                 %计算u(i)
    u(i)=h(i-1)/(h(i-1)+h(i));
end
for i=2:l-1                  %计算t(i)
    t(i)=h(i)/(h(i-1)+h(i));
end
for i=2:l-1                  %计算d(i)
    d(i)=6*((y(i+1)-y(i))/h(i)-(y(i)-y(i-1))/h(i-1))/(h(i-1)+h(i));
end
if flag==1  
    t(1)=1;                       %边界条件为一阶导
    d(1)=6/h(1)*((y(2)-y(1))/h(1)-dy(1));
    u(l)=1;
d(l)=6/h(l-1)*(dy(2)-(y(l)-y(l-1))/h(l-1));
elseif flag==2                             %边界条件为二阶导
    t(1)=0;                      
    d(1)=2*dy(1);
    u(l)=0;
d(l)=2*dy(2);
else                                    
	t(l)=h(1)/(h(l-1)+h(1));
	u(l)=1-t(l);
	d(l)= 6*((y(2)-y(1))/h(1)-(y(l)-y(l-1))/h(l-1))/(h(1)+h(l-1));
end
s=zeros(l,l);               %稀疏矩阵的建立
for i=1:l
s(i,i)=2;
end
for i=1:l-1
s(i,i+1)=t(i);
end
for i=2:l
s(i,i-1)=u(i);
end

M=s^-1*d';                  %矩阵求解

syms t;                     %带入数值求w(i)
for i=1:l-1
w(i)=M(i).*(x(i+1)-t).^3/(6*h(i))+M(i+1).*(t-x(i)).^3/(6*h(i))+(y(i)-M(i).*h(i).^2/6)*((x(i+1)-t)./h(i))+(y(i+1)-M(i+1).*h(i).^2/6).*((t-x(i))./h(i));
digits(5);
w(i)=vpa(w(i));
w(i)=collect(w(i))
end

for i=1:l-1                     %画出三次样条函数
    for a=x(i):0.001:x(i+1)
        q=eval(subs(w(i),'t','a'));
        plot(a,q,'b');
        hold on;
    end
end
xlabel('x');
ylabel('y');
title('S(x)');
grid on;
legend('节点','三次样条差值');