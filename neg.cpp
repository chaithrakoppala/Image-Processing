#include<iostream>
using namespace std;

class Matrix
{
        int a[3][3];
    public:
        void accept();      
        void display();
        void operator-();  // Overloaded '-' Unary Operator
};
void Matrix::accept()    // Accepting values from the User
{
        cout<<"\n Enter Matrix Element (3 X 3) : \n\n";
        for(int i=0; i<3; i++)
        {
                for(int j=0; j<3; j++)
                {
                        cout<<" ";
                        cin>>a[i][j];
                }
        }
}
void Matrix::display()   // Function for Displaying the Matrix
{
        cout<<"\n Matrix is : \n\n";
        for(int i=0; i<3; i++)
        {
                for(int j=0; j<3; j++)
                {
                        cout<<" ";
                        cout<<a[i][j]<<"\t";
                }
        cout<<"\n";
        }
}
void Matrix::operator-()
{
        for(int i=0; i<3; i++)
        {
                for(int j=0; j<3; j++)
                {
                        a[i][j]=-a[i][j];
                }
        }
}
int main()
{
        Matrix m;
        m.accept();  
        m.display();    // Displaying Matrix
        -m;            // Calling Overloaded Unary Operator
        m.display();  // Displaying Negated Numbers Stored in a Matrix
        return 0;
}
