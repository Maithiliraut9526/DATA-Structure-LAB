#include<iostream>
using namespace std;

int main(){
    int r,c,choice;
    char ch;
    int A[10][10], B[10][10],C[10][10];

    
   cout<<"Enter the number of rows : ";
   cin>>r;

   cout<<"Enter the number of coloumns :";
   cin>>c;

    cout<<"Enter the elements of the first matirx : "<<endl;
        for(int i = 0; i < r; i++){
            for(int j = 0; j < c; j++){
                cin>>A[i][j];
            }
        }

    cout<<"Enter the elements of second matrix : "<<endl;
        for(int i = 0; i < r; i++){
            for(int j = 0; j < c; j++){
                cin>>B[i][j];
            }
        }    

    do{    
    cout<<"menu";
    cout<<"\n 1.Addition";
    cout<<"\n 2.Substraction";
    cout<<"\n 3.multipication";
    cout<<endl;
    cout<<"Enter your choice : ";
    cin>>choice;
    
    switch(choice){

    case 1:
    //Addtion of the matrix
    cout<<"The addition of the two matrix are : "<<endl;
    for(int i = 0; i < r; i++){
        for(int j= 0; j < c; j++){
            C[i][j] = A[i][j] + B[i][j];
            cout<<C[i][j]<<" "; 
        }
        cout<<endl;
    }   
    break;

    case 2:
    //Substraction of the matrix
    cout << "The substraction of the two matris are : "<<endl;
    for (int i  = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            C[i][j] = A[i][j] - B[i][j];
            cout<<C[i][j]<<" ";
        }
        cout<<endl;
    }
    break;

    case 3:
    //Multipication of the two matrix
    cout<<"The multipication if the two matrix are : "<<endl;
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
        C[i][j] = 0;
        for(int k = 0; k < c; k++){
            C[i][j] += A[i][k] * B[k][j]; 
        }
        cout << C[i][j]<< " ";
        }
        cout<<endl;
    }
    break;

    default:
        cout<<"Invalid choice :";
    }

    cout<<"Do you want to continue ? (y/n)";
    cin>>ch;
    }while(ch == 'y' || ch == 'Y');

    cout<<"program end";
    return 0;
}