#include <iostream>
#include <cmath>
using namespace std;
int main()
{
   double tall, weight, bmi;//定義輸入 
   
   cout<<"Height(m): ";//詢問身高 
   cin>>tall;//輸入身高 
   cout<<"Wieght(kg): ";//詢問體重 
   cin>>weight;//輸入體重 
   bmi=weight/pow((tall),2);//計算BMI 
   
   cout<<"Your BMI: "<<bmi<<endl;//顯示BMI 
   //判斷範圍 
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
