function []=lagMeanVal(a,b)
m=[a,b];
n=[sin(a),sin(b)];
plot(m,n,'r*');
hold on;
syms x;
f=sin(x);
p=ezplot(f,[0,2*pi]);
set(p,'Color','k');
hold on;
k=(sin(b)-sin(a))/(b-a);
y1=k*(x-a)+sin(a);
ezplot(y1);
hold on;
r=fzero(@(x)cos(x)-k,a,b);
y=k*(x-r)+sin(r);
q=ezplot(y);
set(q,'Color','r')
axis([-pi/2 2.5*pi -1.5 1.5]);
title(¡®lagMeanVal¡¯);
