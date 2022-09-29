#include<iostream>
using namespace std;
#define PI 3.1416

// function prototypes
float volume(float length, float breadth, float height);
float volume(float radius);
float volume(float radius, float height);

int main(){
	float cube_l = 40.0, cube_b = 30.0, cube_h = 10.0;
	float sphere_r = 2.5;
	float cylinder_r = 2.5, cylinder_h = 10.0;
	cout<<"Volume of Cube ="<<volume(cube_l, cube_b, cube_h)<<endl;
	cout<<"Volume of Sphere ="<<volume(sphere_r)<<endl;
	cout<<"Volume of Cylinder ="<<volume(cylinder_r, cylinder_h)<<endl;
	return 0;
}
// function defination
float volume(float length, float breadth, float height){
	return length * breadth * height;
}
float volume(float radius){
	return (4.0/3.0) * PI * radius * radius *radius;
}
float volume(float radius, float height){
	return PI * radius *radius * height;
}
