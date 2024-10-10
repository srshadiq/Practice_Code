/*Name: MD.Touhidur Rahman
**Department: Computer Scinece & Engineering,RUET
**Section: A,Roll: 2103053
**ProjectName: MyCash,Assignment of 1 year even semester
**Course Instructor: Prof.Dr.MD.Shahid Uz Zaman,Department of CSE,RUET*/
#include<bits/stdc++.h>
#include<conio.h>
#include<windows.h>
using namespace std;
int total = 0;
bool pinsafe = true;
HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
class Member {
    private :
        string mobile,name;
        int pin;
        float balance;
    public :
        Member() {balance = 0;}
        void setmob(string m) {mobile = m;}
        void setnam(string n) {name = n;}
        void setpin(int p) {pin = p;}
        void setbalance(float b) {balance = b;}
        string getmob() {return mobile;}
        string getnam() {return name;}
        float getbaln() {return balance;}
        int getpin() {return pin;}
        void reset() {
            mobile = "";
            name = "";
            pin = 0;
            balance = 0;
        }

};
class History {
    private:
        vector<string> descriptions;
        vector<float> amounts;
        vector<float> Balancehis;

    public:
        void addTransaction(string description, float amount) {
            descriptions.push_back(description);
            amounts.push_back(amount);
        }
        void addbalance(float baln) { Balancehis.push_back(baln);}
        void displayHistory() {
            cout << "Transaction History:" << endl;
            for (int i = 0,j = 101; i < descriptions.size(); i++,j=j+4) {
                cout << "Tran ID:" << " " << j << " " << ",Description: " << descriptions[i] << ", Amount: " << amounts[i] << ",Balance:" << " " << Balancehis[i] << endl;
            }
        }
};
void login();
void cashin(int);
void cashout(int);
void sendmoney(int);
void checkbaln(int);
void historydis(int);
void paybill(int);
void saveMembers();
void loadMembers();
bool mblecheck(string );
Member mem[10000];
History history[10000];
int terminal1() {
    int op1;
    system("cls");
    cout << "*** MyCash Login***" << endl;
    cout << "1. Login" << endl;
    cout << "2. Register" << endl;
    cout << "3. Exit" << endl;
    cout << "   Enter Your Option(1-3):" << endl;
    cin >> op1;
    return op1;
}
int terminal2() {
    int opt2;
    system("cls");
    cout << "******** MyCash Menu ********" << endl;
    cout << "1. Update Me" << endl;
    cout << "2. Remove Me" << endl;
    cout << "3. Send Money"<< endl;
    cout << "4. Cash-in" << endl;
    cout << "5. Cash-out" << endl;
    cout << "6. Pay Bill" << endl;
    cout << "7. Check Balance" << endl;
    cout << "8. History"<< endl;
    cout << "9. Logout" << endl;
    cout << "   Enter Your Option (1-9):_" << endl;
    cin >> opt2;
    return opt2;
}
int idsearch(string m) {
    int indx = -1;
    for(int i = 0; i < total; i++) {
        if(mem[i].getmob()==m) {
            indx = i;
            break;
        }
    }
    return indx;
}
int pin() {
	string pin;
	char pass[12];
	int indx = 0;
    pinsafe = true;
	while(1) {
		char ch = getch();
		if(ch=='\r') break;
		else if(ch=='\b' and indx > 0) {
		cout << "\b \b";
		indx--;
        }
		else if(ch=='\b' and indx == 0) continue;
		else {
			pass[indx++] = ch;
			cout << "*";
		}
	}
	pass[indx] = '\0';
	for(int i = 0; pass[i] != '\0'; i++) pin.push_back(pass[i]);
    if(pin.size()!=5) {
    cout << "\n";
    pinsafe = false;
    cout << "Pin must be 5 Digits" << endl;
    srand(time(0));
    return (1000+rand()%9000);
    }
    else return stoi(pin);
}
void update(int loc) {
    string name; int pnI,pnF,randI,randF;
    cout << "Old Name: " << mem[loc].getnam() << endl;
    while(1) {
        cout << "New Name (enter to ignore): " << endl;
        char ch = getch();
        if(ch=='\r') break;
        else {
        cin.ignore(numeric_limits<streamsize>::max(),'\n');
        getline(cin,name);
        mem[loc].setnam(name);
        break;
        }
    }
    cout << "Enter Old pin: ";
    int pinO; pinO = pin(); cout << "\n";
    if(pinO!=mem[loc].getpin()) {
        cout << "Incorrect pin" << endl;
    }
    else {
        while(1) {
            cout << "New pin (enter to ignore): "; cout << "\n";
            char ch = getch();
            if(ch=='\r') break;
            else {
            pnI = pin(); cout << "\n";
            cout << "Confirm New pin: ";
            pnF = pin(); cout << "\n";
            if(pnI==pnF) {
                SetConsoleTextAttribute(h,14);
                cout << "myCah OTP: ";
                srand(time(0));
                randI = 1000 + rand() % 9000;
                cout << randI << endl;
                SetConsoleTextAttribute(h,7);
                auto start = chrono::system_clock::now();
                auto end = start + chrono::minutes(2);
                cout << "Enter OTP(OTP validity 2 Minute): ";
                cin >> randF;
                auto get = chrono::system_clock::now();
                if(get <= end) {
                    if(randI==randF) {
                        mem[loc].setpin(pnI);
                        cout << "Update is Successfull" << endl;
                        break;
                    }
                    else {
                        cout << "OTP does NOT Matched" << endl;
                        break;
                    }
                }
                else cout << "OTP time has expired" << endl;

            }
            else {
            cout << "Pins must be same" << endl;
            break;}
            }
        }
    }
    cout << "Press any key to continue" << endl;
    getch();
}
void Register() {
    string mobile,name;
    int pinI,pinF,otpI,otpF;
    cout << "Enter Mobile number (11-Digits):" << endl;
    cin >> mobile;
    cin.ignore(numeric_limits<streamsize>::max(),'\n');
    if(mblecheck(mobile)) cout << "Member with the same mobile number already exists in the Database" << endl;
    else {
    if(idsearch(mobile)==-1) {
        cout << "Enter name: ";
        getline(cin,name);
        cout << "Enter pin: ";
        pinI = pin(); cout << "\n";
        if(pinsafe) {
            cout << "Confirm Pin: ";
        pinF = pin(); cout << "\n";
        if(pinI == pinF) {
            SetConsoleTextAttribute(h,14);
            cout << "mycash OTP: ";
            srand(time(0));
            otpI = (1000 + rand() % 9000); //! (lb + rand() % (ub - lb + 1))
            cout << otpI << endl;
            SetConsoleTextAttribute(h,7);
            auto start = chrono::system_clock::now();
            auto end = start + chrono::minutes(2);
            cout << "Enter OTP(OTP validity 2 Minute): ";
            cin >> otpF;
            auto get = chrono::system_clock::now();
            if(get <= end) {
                if(otpI == otpF) {
                    mem[total].setmob(mobile);
                    mem[total].setnam(name);
                    mem[total].setpin(pinF);
                    total++;
                    saveMembers();
                    cout << "Registration is Successfull" << endl;
                }
                else cout << "OTP does NOT matched" << endl;
            }
            else cout << "OTP Time has expired" << endl;
        }
        else cout << "Pins must be Same" << endl;
        }
    }
    else cout << "Memeber already exists" << endl;
    }
    cout << "Press any key to continue" << endl;
    getch();
}
void remove(int loc) {
    int randI,randF,term;
    string mobileToRemove = mem[loc].getmob();
    SetConsoleTextAttribute(h,14);
    cout << "mycash OTP: ";
    srand(time(0));
    randI = (1000+rand()%9000);
    cout << randI << endl;
    SetConsoleTextAttribute(h,7);
    auto start = chrono::system_clock::now();
    auto end = start + chrono::minutes(2);
    cout << "Enter OTP(OTP validity 2 minutes): ";
    cin >> randF;
    auto get = chrono::system_clock::now();
    if(get <= end) {
        if(randI==randF) {
            mem[loc].reset();
            total--;
        ofstream tempFile("temp_members.txt");
            if (tempFile.is_open()) {
                ifstream file("members.txt");
                if (file.is_open()) {
                    string line;
                    int index = 0;
                    while (getline(file, line)) {
                        if (index != loc && index < total) {
                            tempFile << line << endl;
                        }
                        if (index == total - 1) {
                            break;
                        }
                        index++;
                    }
                    file.close();
                }
                tempFile.close();
                remove("members.txt");
                rename("temp_members.txt", "members.txt");
                cout << "Remove is Successful" << endl;
                cout << "Press any key to Main Menu" << endl;
            } else {
                cout << "Error loading file from database" << endl;
            }
        for(;;) {
            getch();
            term = terminal1();
            if(term == 3) {
                cout << "End of Program" << endl;
                exit(0);
                }
            else if(term == 1) login();
            else if(term == 2) Register();
            }
        }
        else cout << "OTP doesn't matched" << endl;
    }
    else cout << "OTP has expired" << endl;
    cout << "Press any key to continue" << endl;
    getch();

}
void login() {
    string mbile; int p,indx,term;
    bool mob = false, pn = false;
    loadMembers();
    cout << "Enter Mobile No: ";
    cin >> mbile;
    cout << "Enter Pin: ";
    p = pin();
    cout << "\n";
    for(int i = 0; i < total; i++) {
        if(mem[i].getmob()==mbile) {
            mob = true;
            indx = i;
            break;
        }
    }
    if(mem[indx].getpin()==p and mob == true) {
        pn = true; int term2;
        for(;;){
            term = terminal2();
            if(term == 1) update(indx);
            else if(term ==2) remove(indx);
            else if(term == 3) sendmoney(indx);
            else if(term == 4) cashin(indx);
            else if(term == 5) cashout(indx);
            else if(term == 6) paybill(indx);
            else if(term == 7) checkbaln(indx);
            else if(term == 8) historydis(indx);
            else if(term==9) {
                term2 = terminal1();
                if(term2==3){
                cout << "End of Program" << endl;
                exit(0);
                }
                else {
                    if(term2==1) {
                    login();
                    break;}
                    else if(term2==2) {
                    Register();
                    break;}
                }
            }
        }

    }
    if(mob==false ) {
        cout << "Destination Mobile no. is invalid" << endl;
    }
    else if(mob==true and pn == false) {
        cout << "Incorrect Pin" << endl;
    }
    cout << "Press any key to continue" << endl;
    getch();
}
void sendmoney(int loc) {
    string number; float amount;
    int randI,randF;
    cin.ignore(numeric_limits<streamsize>::max(),'\n');
    cout << "Enter Destination No.(11-Digits): " << endl;
    getline(cin,number);
    cout << "Enter Amount: ";
    cin >> amount;
    cout << "Sending " << amount << " " << "to" << " " << number << endl;
    cout << "Are you sure(Y/N)?" ;
    char ch; cin >> ch;
    if(ch=='y' or ch =='Y') {
        SetConsoleTextAttribute(h,14);
        cout << "mycash OTP: ";
        srand(time(0));
        randI = (1000+rand()%9000);
        cout << randI << endl;
        SetConsoleTextAttribute(h,7);
        auto start = chrono::system_clock::now();
        auto end = start + chrono::minutes(2);
        cout << "Enter OTP(OTP validity 2 minutes): ";
        cin >> randF;
        auto get = chrono::system_clock::now();
    if(get <= end) {
        if(randI==randF) {
            if(((mem[loc].getbaln())-amount)<0) cout << "Insufficient Fund" << endl;
            else {
                mem[loc].setbalance(mem[loc].getbaln()-amount);
                history[loc].addTransaction("Send Money",amount);
                history[loc].addbalance(mem[loc].getbaln());
                saveMembers();
                cout << "Send Money is Successfull" << endl;
            }
        }
        else {
            cout << "OTP does NOT macthed" << endl;
        }
    }
    else cout << "OTP time has expired" << endl;
    }
    else if(ch=='n' or ch=='N') cout << "Send money is Cancalled" << endl;
    else cout << "Please chose between Y/N" << endl;
    cout << "Press any key to continue" << endl;
    getch();
}
void cashin(int loc) {
    float amount;
    cout << "Enter Amount: ";
    cin >> amount;
    cout << "Cash-in " << amount << endl;
    cin.ignore(numeric_limits<streamsize>::max(),'\n');
    cout << "Are you sure(Y/N)? ";
    char ch = cin.get();
    if(ch=='y' or ch=='Y') {
        mem[loc].setbalance(mem[loc].getbaln() + amount);
        history[loc].addTransaction("Cash-in",amount);
        history[loc].addbalance(mem[loc].getbaln());
        saveMembers();
        cout << "Cash-in is Successfull" << endl;
    }
    else if (ch=='n' or ch=='N') {
        cout << "Cash-in is Cancalled" << endl;
    }
    else cout << "Please choose between (Y/N)" << endl;
    cout << "Press any key to continue" << endl;
    getch();

}
void cashout(int loc) {
    float amount;
    int randI,randF;
    cout << "Enter Amount: ";
    cin >> amount;
    cin.ignore(numeric_limits<streamsize>::max(),'\n');
    cout << "Cash-out " << amount << endl;
    cout << "Are you sure(Y/N)? ";
    char ch = cin.get();
    if(ch=='y' or ch=='Y') {
        SetConsoleTextAttribute(h,14);
        cout << "myCash OTP: ";
        srand(time(0));
        randI = (1000+rand()%9000);
        cout << randI << endl;
        SetConsoleTextAttribute(h,7);
        auto start = chrono::system_clock::now();
        auto end = start + chrono::minutes(2);
        cout << "Enter OTP(OTP validity 2 Minutes): ";
        cin >> randF;
        auto get = chrono::system_clock::now();
        if(get <= end ) {
            if(randI==randF) {
            if(((mem[loc].getbaln())-amount)<0) cout << "Insufficient Fund" << endl;
            else {
                mem[loc].setbalance(mem[loc].getbaln()-amount);
                history[loc].addTransaction("Cash-Out",amount);
                history[loc].addbalance(mem[loc].getbaln());
                saveMembers();
                cout << "Cash-out is Successfull" << endl;
            }
            }
            else cout << "OTP does NOT Matched" << endl;
        }
        else cout << "OTP time has expired" << endl;
    }
    else if(ch=='n' or ch=='N') cout << "Cash-out is Cancalled" << endl;
    else cout << "Please chose Between Y/N" << endl;
    cout << "Press any key to continue" << endl;
    getch();
}
void checkbaln(int loc) {
    cout << "Balance : " << mem[loc].getbaln() << endl;
    cout << "Press any key to continue" << endl;
    getch();
}
string billtype(int n) {
    if(n==1) return "Gas";
    else if(n==2) return "Electricity Bill";
    else if(n==3) return "Water Bill";
    else if(n==4) return "Internet Bill";
}
void paybill(int loc) {
    int randI,randF;
    cout << "Enter Bill Type (Gas/Electricity/Water/Internet-1/2/3/4): ";
    int op; cin >> op;
    string type = billtype(op);
    cout << "Your " << type << ": ";
    float amount; cin >> amount;
    cout << "Want to pay(Y/N)? ";
    char ch; cin >> ch;
    if(ch=='Y' or ch=='y') {
        SetConsoleTextAttribute(h,14);
        cout << "myCash OTP: ";
        srand(time(0));
        randI = (1000+rand()%9000);
        cout << randI << endl;
        SetConsoleTextAttribute(h,7);
        auto start = chrono::system_clock::now();
        auto end = start + chrono::minutes(2);
        cout << "Enter OTP(OTP validity 2 Minutes): ";
        cin >> randF;
        auto get = chrono::system_clock::now();
        if(get <= end ) {
            if(randI==randF) {
            if(((mem[loc].getbaln())-amount)<0) cout << "Insufficient Fund" << endl;
            else {
                mem[loc].setbalance(mem[loc].getbaln()-amount);
                history[loc].addTransaction(type,amount);
                history[loc].addbalance(mem[loc].getbaln());
                saveMembers();
                cout <<"Bill Payment is Successfull" << endl;
            }
            }
            else cout << "OTP does NOT Matched" << endl;
        }
        else cout << "OTP time has expired" << endl;
    }
    else if(ch=='N' or ch=='n') cout << "Pay Bill is cancelled" << endl;
    else cout << "Please chose Between Y/N" << endl;
    cout << "Press any key to continue" << endl;
    getch();

}
void historydis(int loc) {
    history[loc].displayHistory();
    cout << "Press any key to continue" << endl;
    getch();
}
void saveMembers() {
    ofstream file("members.txt");
    if (file.is_open()) {
        for (int i = 0; i < total; i++) {
            file << mem[i].getmob() << endl;
            file << mem[i].getnam() << endl;
            file << mem[i].getpin() << endl;
            file << mem[i].getbaln() << endl;
        }
        file.close();
    } else {
        cout << "Error loading information from database" << endl;
    }
}

void loadMembers() {
    ifstream file("members.txt");
    if (file.is_open()) {
        while (!file.eof()) {
            string mobile, name;
            int pin;
            float balance;
            file >> mobile;
            if (mobile.empty()) break;
            file >> name;
            file >> pin;
            file >> balance;
            mem[total].setmob(mobile);
            mem[total].setnam(name);
            mem[total].setpin(pin);
            mem[total].setbalance(balance);
            total++;
        }
        file.close();
    }
}
bool mblecheck(string mblechk) {
    ifstream file("members.txt");
    string mobile;
    while (file >> mobile) {
        if (mobile == mblechk) {
            file.close();
            return true;
        }
    }
    file.close();
    return false;
}
int main() {

    int option;
    for(;;) {
        option = terminal1();
        if(option == 3) {
            cout << "End of Program" << endl;
            break;
            }
        switch(option) {
            case 1: login(); break;
            case 2: Register(); break;
        }
    }

}