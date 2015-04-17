#include<mex.h>
#include<matrix.h>
#include<math.h>

double f(double x)
{
	double y;
	y=sin(x)/x;
	return y;
}

double Simpson(double a,double b)
{
	double n;
	int i;
	double p,q;
    double sum,k;
	n=(b-a)*pow(2,8);
	sum=0;
	for(i=0;i<n;i++)
	{
		p=i/pow(2,8)+a;
		q=(i+1)/pow(2,8)+a;
		k=(q-p)/6*(f(p)+4*f((p+q)/2)+f(q));
		sum=sum+k;
	}
	return sum;
}

void mexFunction(int nlhs, mxArray *plhs[], int nrhs, const mxArray *prhs[])
{
	double *sum;
	double a, b;
    plhs[0]=mxCreateDoubleMatrix(1, 1, mxREAL);
	sum=mxGetPr(plhs[0]);
	a=*(mxGetPr(prhs[0]));
	b=*(mxGetPr(prhs[1]));
	*sum=Simpson(a,b);
} 


