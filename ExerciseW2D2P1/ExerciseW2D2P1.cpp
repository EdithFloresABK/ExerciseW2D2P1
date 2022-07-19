#include <iostream>
#include <string>

using namespace std;
int main()
{
    //Introduction
    cout << "Hello Traveler. I love adding and finding the average of three numbers."<<endl;
    //Prompt the 1st number
    cout << " Please write your first number ";
    int first;
    cin >> first;
    //Prompt the 2nd number
    cout << " Please write your second number ";
    int second;
    cin >> second;

    //Prompt the 3rd number
    cout << " Please write your third number ";
    int third;
    cin >> third;

    //Do calculations
    cout << "Thank you, Traveler. Let me do some calculations..." << endl;

    int sum = first + second + third;
    float avg = (float)(sum / 3.0f);

    //Output the calculations to the user
    cout << "Perfect. The sum of your three numbers is " << sum << " and the average is " << avg <<"."<< endl;
    cout << "Please dont be a stranger and come visit me again!" << endl;

}

