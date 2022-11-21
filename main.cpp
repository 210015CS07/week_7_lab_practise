#include "iostream"
#include "cmath"

using namespace std;

//problem 13
//int power_n(int num, int power){
//
//    return pow(num, power);
//}


//problem 15

//void pow_arr(int arr[]){
//    int power[7];
//
//    for(int i = 0; i < 7; i++){
//        cin >> arr[i];
//            power[i] = arr[i];
//    }
//
//    for(int x = 1; x < 7; x+=2){
//        power[x] = pow(power[x], 3);
//    }
//
//    for(int y = 0; y < 7; y++){
//        cout << power[y] << " ";
//    }
//
//    cout << endl;
//
//}

int main(){
    
//    Problem 6. -----------------------------------------------|
    
//    int num_group = 0;
//
//    cout << "Enter the group number: ";
//    cin >> num_group;
//
//    if(num_group >= 1 && num_group <= 6){
//        cout << "N.Alimova" << endl;
//    } else if (num_group == 7 || num_group == 8){
//        cout << "O.Davronbekov" << endl;
//    } else if (num_group >= 9 && num_group <= 14){
//        cout << "Y.Durova" << endl;
//    } else if (num_group >= 15 && num_group <= 22){
//        cout << "S.Abdullaeva" << endl;
//    } else {
//        cout << "This number of group is not exist! " << endl;
//    }
    
//    reading , listening , speaking and writing.
    
    
//    Problem 7. -----------------------------------------------|
    
//    float reading = 0;
//    float listening = 0;
//    float speaking = 0;
//    float writing = 0;
//    float result = 0;
//
//    cout << "Enter your scores(reading, listening, speaking and writing): ";
//    cin >> reading >> listening >> speaking >> writing;
//
//    if(((reading >= 0) && (reading <= 9)) && ((speaking >= 0) && (speaking <= 9)) && ((listening >= 0) && (listening <= 9)) && ((writing >= 0) && (writing <= 9))){
//        result = (reading + listening + speaking + writing)/4;
//    }
//
//    if(result>=7.5){
//        cout << "Your score is " << result << "\nYou can apply" << endl;
//    } else {
//        cout << "Your score is " << result << "\nYou cannot apply" << endl;
//    }
    
    
//    Problem 8. -----------------------------------------------|
    
//    int num = 0;
//    int op = 0;
//
//    cin >> num;
//
//    if(num < 0){
//        op = 3;
//    } else if(num > 0){
//        op = 1;
//    } else if(num == 0){
//        op = 2;
//    }
//
//    switch (op) {
//        case 1:
//            cout << "Positive" << endl;
//            break;
//        case 2:
//            cout << "It is zero" << endl;
//            break;
//        case 3:
//            cout << "Negative" << endl;
//            break;
//    }
    

//    Problem 9. -----------------------------------------------|
    
//    int num;
//    cin >> num;
//
//    for(int i = 0; i <= num; i+=2){
//        cout << i << " ";
//    }
    
//    Problem 10. -----------------------------------------------|
        
//    int num = 0;
//    int sum = 0;
//
//    while (num<5) {
//        cin >> num;
//        sum += num;
//        num++;
//    }
//    cout << sum << endl;
    
//    Problem 11. -----------------------------------------------|
    
//    int num = 1;
//    float average = 0;
//    int ctr = -1;
//    float sum = 0;
//
//    while(num!=0){
//        cin >> num;
//        sum += num;
//        ctr++;
//    }
//    average = sum/ctr;
//    cout << "The average of all numbers is " << average << endl;
//
    
//    Problem 12. -----------------------------------------------|
    
//    char alph;
//
//    cin >> alph;
//
//    for(char row = 65; row <= alph; row++){
//        for(char col = 'A'; col <= row; col++){
//            cout << row;
//        } cout << endl;
//    }
//    cout << endl;
    
//    Problem 13. -----------------------------------------------|

//    int num;
//    int power;
//
//    cout << "Enter the number: ";
//    cin >> num;
//    cout << "Enter the power: ";
//    cin >> power;
//
//    cout << num << " in the power of " << power << " will be ";
//
//    power_n(num, power);

    
//    Problem 14. -----------------------------------------------|
    
    
    
    
   
//    Problem 15. -----------------------------------------------|
    
//    int arr[7];
//
//    pow_arr(arr);
    
    return 0;
}
