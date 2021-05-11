#include<stdio.h>
#include<stdbool.h>
#include<string.h>
#include<math.h>
#define PI 3.14159265358979323846264338
#define rep(i,n) for(int i=0; i < (n); i++)
int main(){
  double a,b,h,m;
  scanf("%lf%lf%lf%lf",&a,&b,&h,&m);
  long double th=(h*60.0+m)*2.0*PI/720.0;
  long double tm=(60.0*m)*2.0*PI/60.0;
  long double ax=a*cos(th);
  long double ay=a*sin(th);
  long double bx=b*cos(tm);
  long double by=b*sin(tm);
  long double dx=bx-ax;
  long double dy=by-ay;
  long double ans=sqrt(dx*dx+dy*dy);
  printf("%.10Lf\n",ans);
  return 0;
}
