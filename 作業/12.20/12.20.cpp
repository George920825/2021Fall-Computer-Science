#include <iostream>
#include <cmath>
using namespace std;
int main()
{
   double tall, weight, bmi;//�w�q��J 
   
   cout<<"Height(m): ";//�߰ݨ��� 
   cin>>tall;//��J���� 
   cout<<"Wieght(kg): ";//�߰��魫 
   cin>>weight;//��J�魫 
   bmi=weight/pow((tall),2);//�p��BMI 
   
   cout<<"Your BMI: "<<bmi<<endl;//���BMI 
   //�P�_�d�� 
   if(bmi < 18.5){
       cout<<"Underweight"<<endl;
   }
   else if(bmi >= 18.5 && bmi < 25){
       cout<<"Normal"<<endl;
   }
   else if(bmi >= 25 && bmi < 30){
       cout<<"Overweight"<<endl;
   }
   else if(bmi >= 30){
       cout<<"Obese"<<endl;
   }
   
   return 0;
}
