#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;


void solve_equation_rk4(float t_init, float t_end, float delta_t, float omega, string filename);

int main()
{
    solve_equation_rk4(0.0, 10.0, 0.1, 1.0, "datos.dat");
    return 0;
    
} 
    
    
void solve_equation_rk4(float t_init, float t_end, float delta_t, float omega, string filename)
{
    float m=7294.29;
    float q=2.0;
    float a,b,f0,f1,f2,f3,R,yn,yn1,y2,yy2;
        
    ofstream outfile;
    outfile.open(filename);  
    
    yn=1.0;
    y2=0.0;
    
    a=-omega*omega;
    
    while (t_init<t_end)
    {
        f0=a*(yn);
        f1=a*(yn+(f0*delta_t)/2.0);
        f2=a*(yn+(f1*delta_t)/2.0);
        f3=a*(yn+(f2*delta_t));
            
        R=(f0/6.0+f1/3.0+f2/3.0+f3/6.0);
        
        yy2= y2+R*delta_t;
        yn1= yn+yy2*delta_t;
          
        outfile << t_init << " " << yn << " " << y2 <<endl;
    
        if(t_init>30 && t_init<70)
        {
            b=3.0;
        }
        
        else
        {
            b=0.0;
        }
        t_init=t_init+delta_t;
        yn=yn1+0.5*(t_init*delta_t)*0;
        y2=yy2+0.5*(t_init*delta_t)*(t_init*delta_t)*q*b;
    }     
    outfile.close();
}







