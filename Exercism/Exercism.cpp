#include <iostream>
#include <string>
#include <iomanip>
#include <ctime>
#include <windows.h>

int main()
{
    system("cls");
    bool in_exercism = true;
    while(in_exercism == true){
        system("cls");
        std::cout << "Which program do you want to run?" << std::endl;
        std::cout << "1. Determining if an entered year is a leap year." << std::endl;
        std::cout << "2. Reversing an entered string." << std::endl;
        std::cout << "3. Working out the age of a person in all the planet's years, based on a entered number of seconds." << std::endl;
        std::cout << "4. Checking what type of triangle three side lengths produce." << std::endl;
        std::cout << "5. Grain chess board, doubling the number of grains on the next tile." << std::endl;
        std::cout << "6. Raindrops, basically fizzbuzz." << std::endl;
        std::cout << "7. Pangram, determining if a sentence uses every letter in the alphabet." << std::endl;
        std::cout << "8. One for <enter name here>, two for me." << std::endl;
        std::cout << "9. School directory system." << std::endl;
        std::cout << "10. Hamming distance." << std::endl;
        std::cout << "11. Nucleotide count." << std::endl;
        std::cout << "0. Exit system." << std::endl;
        int program_choice = 0;
        std::cin >> program_choice;
        system("cls");
        switch(program_choice){
            case 0:{
                in_exercism = false;
                break;
            }
            case 1:{
                //Code for determining if an entered year is a leap year.
                int year;
                std::cout << "Input a year: ";
                std::cin >> year;
                if(year%4 == 0 && (year%100 != 0 || year%400 == 0)){
                    std::cout << "The year " << year << " is a leap year." << std::endl;
                }
                else{
                    std::cout << "The year " << year << " is not a leap year." << std::endl;
                }
                std::cout << std::endl;
                break;
            }
            case 2:{
                //Reversing an entered string.
                std::string inputstring1;
                std::cin.ignore();
                std::cout << "Enter a string: ";
                std::getline(std::cin, inputstring1);
                int stringlength = inputstring1.length();
                int character = stringlength - 1;
                for(int i = 0; i < (stringlength/2); i++){
                    std::swap(inputstring1[i], inputstring1[character]);
                    character = character - 1;
                }
                std::cout << "The reversed string is: " << inputstring1 << std::endl;
                std::cout << std::endl;
                break;
            }
            case 3:{
                //Working out the age of a person in all the planet's years, based on a entered number of seconds.
                int age_in_seconds;
                std::cout << "Enter a length of time in seconds: ";
                std::cin >> age_in_seconds;
                float mercury_age, venus_age, earth_age, mars_age, jupiter_age, saturn_age, uranus_age, neptune_age;
                earth_age = float(age_in_seconds)/31557600;
                mercury_age = earth_age/0.2408467;
                venus_age = earth_age/0.61519726;
                mars_age = earth_age/1.8808158;
                jupiter_age = earth_age/11.862615;
                saturn_age = earth_age/29.447498;
                uranus_age = earth_age/84.016846;
                neptune_age = earth_age/164.79132;
                std::cout << std::fixed << std::setprecision(2);
                std::cout << "The person is " << mercury_age << " mercurian years old." << std::endl;
                std::cout << "The person is " << venus_age << " cytherean years old." << std::endl;
                std::cout << "The person is " << earth_age << " terrestial years old." << std::endl;
                std::cout << "The person is " << mars_age << " martian years old." << std::endl;
                std::cout << "The person is " << jupiter_age << " jovian years old." << std::endl;
                std::cout << "The person is " << saturn_age << " saturian years old." << std::endl;
                std::cout << "The person is " << uranus_age << " uranian years old." << std::endl;
                std::cout << "The person is " << neptune_age << " neptunian years old." << std::endl;
                std::cout << std::endl;
                break;
            }
            case 4:{
                //Checking what type of triangle three side lengths produce.
                int trilength1, trilength2, trilength3;
                std::cin.ignore();
                std::cout << "Enter the first triangle length: ";
                std::cin >> trilength1;
                std::cout << "Enter the second triangle length: ";
                std::cin >> trilength2;
                std::cout << "Enter the third triangle length: ";
                std::cin >> trilength3;
                if(trilength1 > (trilength2 + trilength3) || trilength2 > (trilength1 + trilength3) || trilength3 > (trilength1 + trilength2)){
                    std::cout << "One of the sides entered is longer than the other two combined, so this is not a valid triangle." << std::endl;
                }
                else if(trilength1 == 0 || trilength2 == 0 || trilength3 == 0){
                    std::cout << "One or more of the entered sides has a length of 0; this is not a valid triangle." << std::endl;
                }
                else if(trilength1 < 0 || trilength2 < 0 || trilength3 < 0){
                    std::cout << "One or more of the entered sides is negative; this is not a valid triangle." << std::endl;
                }
                else if(trilength1 == (trilength2 + trilength3) || trilength2 == (trilength1 + trilength3) || trilength3 == (trilength1 + trilength2)){
                    std::cout << "One of the sides equals the length of the other two, making this a degenerate triangle." << std::endl;
                }
                else{
                    if(trilength1 == trilength2 && trilength1 == trilength3){
                        std::cout << "All the sides are the same length, this is an equilateral triangle." << std::endl;
                    }
                    else if(trilength1 == trilength2 && trilength1 != trilength3){
                        std::cout << "Side 1 and 2 are the same length, but side 3 is not, making this an isosceles triangle." << std::endl;
                    }
                    else if(trilength1 == trilength3 && trilength1 != trilength2){
                        std::cout << "Side 1 and 3 are the same length, but side 2 is not, making this an isosceles triangle." << std::endl;
                    }
                    else if(trilength2 == trilength3 && trilength2 != trilength1){
                        std::cout << "Side 2 and 3 are the same length, but side 1 is not, making this an isosceles triangle." << std::endl;
                    }
                    else{
                        std::cout << "All the sides are of different length, so this is a scalene triangle." << std::endl;
                    }
                }
                std::cout << std::endl;
                break;
            }
            case 5:{
                //Grain chess board, doubling the number of grains on the next tile.
                unsigned long long grainchessboard[8][8];
                unsigned long long grain_total = 0;
                for(int i = 0; i < 8; i++){
                    for(int k = 0; k < 8; k++){
                        if(i > 0 && k == 0){
                            grainchessboard[i][k] = 2* grainchessboard[i-1][7];
                        }
                        else if(i == 0 && k == 0){
                            grainchessboard[i][k] = 1;
                        }
                        else{
                            grainchessboard[i][k] = 2*grainchessboard[i][k-1];
                        }
                    }
                }
                for(int i = 0; i < 8; i++){
                    for(int k = 0; k < 8; k++){
                        grain_total = grain_total + grainchessboard[i][k];
                        std::cout << " " << std::setw(19) << grainchessboard[i][k] << " ";
                    }
                    std::cout << std::endl;
                }
                std::cout << std::endl << "The total number of grains is: " << grain_total << std::endl;
                std::cout << std::endl;
                break;
            }
            case 6:{
                //Raindrops, basically fizzbuzz.
                for(int i = 1; i < 51; i++){
                    if(i%3 == 0 || i%5 == 0 || i%7 == 0){
                        std::string raindrops;
                        if(i%3 == 0){
                            raindrops = raindrops + "Pling";
                        }
                        if(i%5 == 0){
                            raindrops = raindrops + "Plang";
                        }
                        if(i%7 == 0){
                            raindrops = raindrops + "Plong";
                        }
                        std::cout << " " << raindrops << " ";
                    }
                    else{
                        std::cout << " " << i << " ";
                    }
                }
                std::cout << std::endl;
                break;
            }
            case 7:{
                //Pangram, determining if a sentence uses every letter in the alphabet.
                bool missing_letter = false;
                std::string sentence;
                std::string alphabet = "abcdefghijklmnopqrstuvwxyz";
                std::cin.ignore();
                std::cout << "Enter a string here: ";
                std::getline(std::cin, sentence);
                int sentence_length = sentence.length();
                for(int k = 0; k < 26; k++){
                    bool letter = false;
                    for(int i = 0; i < sentence_length; i++){
                        if(sentence[i] == alphabet[k]){
                            letter = true;
                        }
                    }
                    if(letter == false){
                        missing_letter = true;
                    }
                }
                if(missing_letter == true){
                    std::cout << "This sentence is not a Pangram" << std::endl;
                }
                else{
                    std::cout << "This sentence is a Pangram" << std::endl;
                }
                std::cout << std::endl;
                break;
            }
            case 8:{
                //One for <enter name here>, two for me.
                std::string twofer = "One for ";
                std::cout << "Enter name here: ";
                std::string name_entry1;
                //std::cin.ignore();
                std::getline(std::cin, name_entry1);
                if(name_entry1 == ""){
                    twofer = twofer + "you, two for me.";
                }
                else{
                    bool name_entry1_empty = true;
                    for(int i = 0; i < name_entry1.length(); i++){
                        if(name_entry1[i] != ' '){
                            name_entry1_empty = false;
                        }
                    }
                    if(name_entry1_empty == true){
                        twofer = twofer + "you, two for me.";
                    }
                    else{
                        twofer = twofer + name_entry1 + ", two for me.";
                    }
                }
                std::cout << twofer << std::endl;
                std::cout << std::endl;
                break;
            }
            case 9:{
                //School directory system. Removing still doesn't work properly, but that isn't required, so moved on for a change of pace
                bool in_school_grade_loop = true;
                std::string student_enrollment[6][50];
                int gradetotals[6] = {0,0,0,0,0,0};
                while(in_school_grade_loop == true){
                    char entry;
                    system("cls");
                    std::cout << "Would you like to add a student ('a'), remove a student ('r'), see the enrolled students ('e'), or quit the system ('q')?" << std::endl;
                    std::cout << "Please enter a selection: ";
                    std::cin >> entry;
                    switch(entry){
                        case 'a':
                        case 'A':{
                            bool in_add_student = true;
                            while(in_add_student == true){
                                int grade;
                                std::string student_name;
                                std::cout << "What is the name of the student: ";
                                std::cin.ignore();
                                std::getline(std::cin, student_name);
                                std::cout << "Which grade do you want to add them to? Enter a number between 1 and 6, or press 0 to exit: ";
                                std::cin >> grade;
                                if(grade > 0 && grade < 7){
                                    if(gradetotals[grade-1] == 50){
                                        std::cout << "There are already 50 students in that grade, it is full." << std::endl;
                                        Sleep(500);
                                    }
                                    else{
                                        student_enrollment[grade-1][gradetotals[grade-1]] = student_name;
                                        gradetotals[grade-1]++;
                                        std::cout << student_name << " added to grade " << grade << "." << std::endl;
                                        Sleep(1000);
                                    }
                                }
                                else if(grade == 0){
                                    in_add_student = false;
                                }
                                else{
                                    std::cout << "Not a valid entry, please try again." << std::endl;
                                }
                            }
                            break;
                        }
                        case 'r':
                        case 'R':{
                            bool in_remove_student = true;
                            while(in_remove_student == true){
                                int grade;
                                std::cout << "Which grade would you like to remove a student from? Enter a number between 1 and 6, or press 0 to exit: ";
                                std::cin >> grade;
                                if(grade == 0){
                                    in_remove_student = false;
                                }
                                else if(grade > 0 && grade < 7){
                                    if(gradetotals[grade-1] == 0){
                                        std::cout << "There are no students in that grade, please try again." << std::endl;
                                    }
                                    else if(gradetotals[grade-1] == 1){
                                        std::cout << "The student in grade " << grade << " is: " << student_enrollment[grade-1][0] << std::endl;
                                    }
                                    else{
                                        std::cout << "The students in grade " << grade << " are: ";
                                        for(int i = 0; i < gradetotals[grade-1]; i++){
                                            std::cout << student_enrollment[grade-1][i];
                                            if(i == gradetotals[grade-1]-1){
                                                std::cout << "." << std::endl;
                                            }
                                            else if(i == gradetotals[grade-1]-2){
                                                std::cout << ", and ";
                                            }
                                            else{
                                                std::cout << ", ";
                                            }
                                        }
                                    }
                                    if(gradetotals[grade-1] > 0){
                                        if(gradetotals[grade-1] == 1){
                                            std::cout << "If you would like to remove " << student_enrollment[grade-1][0] << " press 1, or 0 to exit: ";
                                        }
                                        else{
                                            std::cout << "Which student would you like to remove? Select a number between 1 and " << gradetotals[grade-1] << ", or press 0 to exit: ";
                                        }
                                        int entry_2;
                                        std::cin >> entry_2;
                                        if(entry_2 > 0 && entry_2 <= gradetotals[grade-1]){
                                            for(int i; i < (gradetotals[grade-1]-entry_2+1); i++){
                                                student_enrollment[grade-1][entry_2+i-1] = student_enrollment[grade-1][entry_2+i];
                                            }
                                            student_enrollment[grade-1][gradetotals[grade-1]] = "";
                                            gradetotals[grade-1]--;
                                        }
                                        else if(entry_2 == 0){
                                            Sleep(500);
                                            in_remove_student = false;
                                        }
                                        else{
                                            std::cout << "Not a valid entry." << std::endl;
                                        }
                                    }
                                }
                                else{
                                    std::cout << "Not a valid entry, please try again." << std::endl;
                                }
                            }
                            break;
                        }
                        case 'e':
                        case 'E':{
                            bool in_view_students = true;
                            while(in_view_students == true){
                                int grade;
                                std::cout << "Which grade would you like to view? Enter a number between 1 and 6, press 7 to view all, or press 0 to exit: ";
                                std::cin >> grade;
                                if(grade == 0){
                                    in_view_students = false;
                                }
                                else if(grade > 0 && grade < 7){
                                    if(gradetotals[grade-1] == 0){
                                        std::cout << "There are no students in that grade." << std::endl;
                                    }
                                    else if(gradetotals[grade-1] == 1){
                                        std::cout << "The student in grade " << grade << " is: " << student_enrollment[grade-1][0] << std::endl;
                                    }
                                    else{
                                        std::cout << "The students in grade " << grade << " are: ";
                                        for(int i = 0; i < gradetotals[grade-1]; i++){
                                            std::cout << student_enrollment[grade-1][i];
                                            if(i == gradetotals[grade-1]-1){
                                                std::cout << "." << std::endl;
                                            }
                                            else if(i == gradetotals[grade-1]-2){
                                                std::cout << ", and ";
                                            }
                                            else{
                                                std::cout << ", ";
                                            }
                                        }
                                    }
                                }
                                else if(grade == 7){
                                    if(gradetotals[0] == 0 && gradetotals[1] == 0 && gradetotals[2] == 0 && gradetotals[3] == 0 && gradetotals[4] == 0 && gradetotals[5] == 0){
                                        std::cout << "There are no students currently enrolled." << std::endl;
                                    }
                                    else{
                                        std::cout << "The currently enrolled students are: ";
                                        for(int i; i < 6; i++){
                                            std::cout << "    starting with grade " << (i + 1) << "  "; 
                                            if(gradetotals[i] > 0){
                                                int rankings[gradetotals[i]];
                                                for(int k = 0; k < gradetotals[i]; k++){
                                                    rankings[k] = 0;
                                                    for(int l = 0; l < gradetotals[i]; l++){
                                                        if(k == l){
                                                        }
                                                        else if (student_enrollment[i][k] > student_enrollment[i][l]){
                                                            rankings[k]++;
                                                        }
                                                        else{
                                                        }
                                                    }
                                                }
                                                std::cout << "In grade " << (i+1) << ": ";
                                                for(int k = 0; k < gradetotals[i]; k++){ //Working here atm, don't ask what's going on, I don't know
                                                    for(int l = 0; l < gradetotals[i]; l++){
                                                        if(k == gradetotals[i]){
                                                            if(rankings[l] == k){
                                                                if(gradetotals[i] == 1){
                                                                    std::cout << student_enrollment[i][l] << ".";
                                                                }
                                                                else if(gradetotals[i] == 2){
                                                                    std::cout << " and " << student_enrollment[i][l] << ".";
                                                                }
                                                                else{
                                                                    std::cout << ", and " << student_enrollment[i][l] << ".";
                                                                }
                                                            }
                                                        }
                                                        else if(k == 0){
                                                            if(rankings[l] == k){
                                                                std::cout << student_enrollment[i][l];
                                                            }
                                                        }
                                                        else{
                                                            if(rankings[l] == k){
                                                                std::cout << ", ";
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                    std::cout << std::endl;
                                }
                                else{
                                    std::cout << "Not a valid entry, please try again." << std::endl;
                                }
                            }
                            break;
                        }
                        case 'q':
                        case 'Q':{
                            in_school_grade_loop = false;
                            break;
                        }
                    }
                }
                break;
            }
            case 10:{ //Hamming distance.
                std::string string_1, string_2;
                std::cout << "Please enter a first string: ";
                std::cin.ignore();
                std::getline(std::cin, string_1);
                int string_1_length = string_1.length();
                std::cout << "Please enter a second string of length " << string_1_length << ": ";
                std::getline(std::cin, string_2);
                int string_2_length = string_2.length();
                std::cout << "Strings are " << string_1 << " and " << string_2 << std::endl;
                std::cout << "String lengths are " << string_1_length << " and " << string_2_length << std::endl;
                Sleep(2000);
                if(string_1_length == string_2_length){
                    int Hamming_distance = 0;
                    for(int i = 0; i < string_1_length; i++){
                        std::cout << "string_1[i] = " << string_1[i] << " and string_2[i] = " << string_2[i] << std::endl;
                        if(string_1[i] != string_2[i]){
                            Hamming_distance++;
                        }
                    }
                    std::cout << "The Hamming Distance of the two strings is " << Hamming_distance << std::endl;
                    Sleep(1500);
                }
                else{
                    std::cout << "Strings are not of the same length." << std::endl;
                    Sleep(1500);
                }
                break;
            }
            case 11:{ //Nucleotide count.
                std::string string_1;
                std::cout << "Please enter a nucleotide string (should only consist of A, C, G and T): ";
                std::cin.ignore();
                std::getline(std::cin, string_1);
                int A_count = 0, C_count = 0, G_count = 0, T_count = 0; 
                bool contains_other = false;
                for(int i = 0; i < string_1.length(); i++){
                    switch(string_1[i]){
                        case 'A':{
                            A_count++;
                            break;
                        }
                        case 'C':{
                            C_count++;
                            break;
                        }
                        case 'G':{
                            G_count++;
                            break;
                        }
                        case 'T':{
                            T_count++;
                            break;
                        }
                        default:{
                            contains_other = true;
                            break;
                        }
                    }
                }
                if(contains_other == false){
                    std::cout << "'A' count = " << A_count << "  'C' count = " << C_count << "  'G' count = " << G_count << "  'T' count = " << T_count << std::endl;
                }
                else{
                    std::cout << "The string contains characters other than A, C, G or T, and therefore is invalid." << std::endl;
                }
                Sleep(2000);
                break;
            }
            default:{
                std::cout << "Not a valid entry, please repeat." << std::endl;
                Sleep(1000);
            }
        }
        Sleep(2000);
    }
    return 0;
}