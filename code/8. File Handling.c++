// Example1: Open a Text File
#include<iostream>        
#include<fstream>
using namespace std;
int main(){
    fstream FileName;               
    FileName.open("FileName.txt", ios::out);    
    if (!FileName){                 
        cout<<"Error while creating the file";    
    }
    else{
        cout<<"File created successfully";    
        FileName.close();           
    }
    return 0;
}



// Example 2: Writing to a Text File
#include<iostream>                         
#include<fstream>                            
using namespace std;
int main() {
    fstream FileName;
    FileName.open("FileName1.txt", ios::out);
    if (!FileName) {
        cout << " Error while creating the file ";
    }
    else {
        cout << "File created and data got written to file";
        FileName << "This is a blog posted on internet";  
        FileName.close();
    }
    return 0;
}



// Example 2: Reading from a Text File
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream my_file("example.txt");
    if (my_file.is_open()) {
        string line;
        while (getline(my_file, line)) {
            cout << line << '\n';
        }
        my_file.close();
    } else {
        cerr << "Error opening file!\n";
    }
    return 0;
}

// Example 3: Appending to a Text File
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream my_file("example.txt", ios::app);
    if (my_file.is_open()) {
        my_file << "Appending more data...\n";
        my_file.close();
        cout << "Data has been appended to example.txt\n";
    } else {
        cerr << "Error opening file!\n";
    }
    return 0;
}

// Example 4: Binary File Writing
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream my_file("data.bin", ios::binary);
    if (my_file.is_open()) {
        int data[] = {1, 2, 3, 4, 5};
        my_file.write(reinterpret_cast<char*>(data), sizeof(data));
        my_file.close();
        cout << "Data has been written to data.bin\n";
    } else {
        cerr << "Error opening file!\n";
    }
    return 0;
}

// Example 5: Binary File Reading
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream my_file("data.bin", ios::binary);
    if (my_file.is_open()) {
        int data[5];
        my_file.read(reinterpret_cast<char*>(data), sizeof(data));
        for (int i = 0; i < 5; ++i) {
            cout << data[i] << ' ';
        }
        cout << '\n';
        my_file.close();
    } else {
        cerr << "Error opening file!\n";
    }
    return 0;
}




=========================Handling file with all mode=====================================


// Example 6: Writing to a Text File
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    ofstream my_file("student_data.txt");
    if (my_file.is_open()) {
        my_file << "Student Name: John Doe\n";
        my_file << "Student ID: 123456\n";
        my_file << "Major: Computer Science\n";
        my_file.close();
        cout << "Student data has been written to student_data.txt\n";
    } else {
        cerr << "Error opening file!\n";
    }
    return 0;
}

// Example 7: Reading from a Text File
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    ifstream my_file("student_data.txt");
    if (my_file.is_open()) {
        string line;
        while (getline(my_file, line)) {
            cout << line << '\n';
        }
        my_file.close();
    } else {
        cerr << "Error opening file!\n";
    }
    return 0;
}

// Example 8: Appending to a Text File
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    ofstream my_file("student_data.txt", ios::app);
    if (my_file.is_open()) {
        my_file << "GPA: 3.8\n";
        my_file.close();
        cout << "Additional data has been appended to student_data.txt\n";
    } else {
        cerr << "Error opening file!\n";
    }
    return 0;
}

// Example 9: Binary File Writing
#include <iostream>
#include <fstream>

using namespace std;

struct Student {
    char name[50];
    int id;
    float gpa;
};

int main() {
    ofstream my_file("student_data.bin", ios::binary);
    if (my_file.is_open()) {
        Student student = {"Alice", 123456, 3.9};
        my_file.write(reinterpret_cast<char*>(&student), sizeof(Student));
        my_file.close();
        cout << "Student data has been written to student_data.bin\n";
    } else {
        cerr << "Error opening file!\n";
    }
    return 0;
}

// Example 10: Binary File Reading
#include <iostream>
#include <fstream>

using namespace std;

struct Student {
    char name[50];
    int id;
    float gpa;
};

int main() {
    ifstream my_file("student_data.bin", ios::binary);
    if (my_file.is_open()) {
        Student student;
        my_file.read(reinterpret_cast<char*>(&student), sizeof(Student));
        cout << "Name: " << student.name << '\n';
        cout << "ID: " << student.id << '\n';
        cout << "GPA: " << student.gpa << '\n';
        my_file.close();
    } else {
        cerr << "Error opening file!\n";
    }
    return 0;
}

