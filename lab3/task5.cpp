/*Task #5:
Write a program in CPP to find the product of two 3 by 3 matrices entered by the user by overloading
binary * operator.
*/
#include<iostream>
using namespace std;
class matrix{
    int mat[3][3];
public:
    matrix(){
        for(int i=0;i<3;i++){
            for(int j=0;j<3;++j){
                mat[i][j]=0;
            }}}
    void getdata(){
        cout<<"Enter elements of 3x3 matrix,"<<endl;
        for(int i=0;i<3;i++){
            for(int j=0;j<3;++j){
               cin>>mat[i][j];
            }}
    }
    matrix operator*(matrix m2){
        matrix temp;
         for(int i=0;i<3;i++){
            for(int j=0;j<3;++j){
               for(int k=0;k<3;k++){
                   int val=mat[i][k]*m2.mat[k][j];
                    temp.mat[i][j]+=val;
               }
            }
        }
        return temp;
    }
    void showdata(){
        cout<<"The product of the matrix is,"<<endl;
         for(int i=0;i<3;i++){
            for(int j=0;j<3;++j){
               cout<<mat[i][j]<<"  ";
            }
             cout<<endl;
        }
    }
};
int main(){
    matrix mat1,mat2,mat3;
    mat1.getdata();
    mat2.getdata();
    mat3=mat1*mat2;
    mat3.showdata();
    return 0;
}
            
