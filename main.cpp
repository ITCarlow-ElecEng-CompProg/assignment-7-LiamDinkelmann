#include <iostream>
#include <math.h>

using namespace std;
char menu();                                                            //Function prototypes
void car_2_pol(double &x1, double &y1, double &r1, double &th1);
void pol_2_car(double &X1, double &Y1, double &R1, double &TH1);

int main()
{
     do{
    switch(menu())
    {
        case 'p':
            {
                double x, y, r=0, th=0;                                 //Taking in the Cartesian form from the user
                cout<<"Enter the X coordinate: "<<endl;
                cin>>x;
                cout<<"Enter the Y coordinate: "<<endl;
                cin>>y;
                car_2_pol(x,y,r,th);                                    //Calling the function to do the conversion
                cout<<" \n \n The distance from reference point is "<<r<<" and the angle from reference direction is "<<th<< " radians \n"<<endl;
                break;
            }

        case 'c':
            {
                double X=0, Y=0, R, TH;                                 //Taking in the polar form from the user
                cout << "Enter distance from reference point (r): ";
                cin >> R;
                cout <<"Enter the angle from the reference direction (theta) : "<< endl ;
                cin>>TH;
                pol_2_car(X,Y,R,TH);                                    //Calling the function to do the conversion
                cout<<"The cartesian form is ("<<X<<","<<Y<<") \n"<<endl;
                break;
            }

        case 'q':
                return 0;
    }
    }
    while(1);







}
char menu()
{
    char choice;                                                        //Function to take in the input from user on what they wish to do

        cout<<" Enter 'p' to convert Cartesian to Polar. \n Enter 'c' to convert Polar to Cartesian \n Enter 'q' to Quit "<<endl;
        cin>>choice;


return choice;
}

void car_2_pol(double &x1, double &y1, double &r1, double &th1)         //Function to convert cartesian form to polar form
{

    r1 = sqrt((x1*x1)+(y1*y1));
    th1 = atan(y1/x1);

}

void pol_2_car(double &X1, double &Y1, double &R1, double &TH1)         //Function to convert polar to cartesian
{

    X1 = R1*cos(TH1);
    Y1 = R1*sin(TH1);


}
