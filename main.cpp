#include <iostream>
using namespace std;
const int MAXACCOUNTS = 8;

//Part 2
//struct Account {
//    int AccountNumber;
//    double Balance;
//    int DaysSinceDebited;
//};

//Part 3
//double CalcInterest(Account account) {
//    double interestPaid;
//    if (account.Balance > 10000 || account.DaysSinceDebited > 30) {
//        double interest = 0.06;
//        interestPaid = account.Balance * interest;
//    } else {
//        double interest = 0.03;
//        interestPaid = account.Balance * interest;
//    }
//
//    return interestPaid;
//}

int main()
{

//    Part 1
//    int AccountNumber[MAXACCOUNTS] = {1001, 7940, 4382, 2651, 3020, 7168, 6245,
//                                      9342};
//    double Balance[MAXACCOUNTS] = {4254.40, 27006.25, 123.50, 85326.92, 657.0,
//                                   7423.34, 4.99, 107864.44};
//    int DaysSinceDebited[MAXACCOUNTS] = {20, 35, 2, 14, 5, 360, 1, 45};
//
//    cout << "Acct No." << "\t" << "Balance" << "\t" << "Interest Paid" << endl;
//
//    for (int i = 0; i < 8; i++) {
//        double interestPaid;
//        if(Balance[i] > 10000 || DaysSinceDebited[i] > 30) {
//            double interest = 0.06;
//              interestPaid = Balance[i] * interest;
//        } else {
//            double interest = 0.03;
//            interestPaid = Balance[i] * interest;
//        }
//        cout << AccountNumber[i] << "\t\t" << Balance[i] << "\t\t" << interestPaid << endl;
//
//    }


//   Part 2
//    Account accounts[MAXACCOUNTS] = {
//            {1001, 4254.40,20},
//            {7940, 27006.25,35},
//            {4382, 123.5,2},
//            {2651, 85326.92, 14},
//            {3020, 657.1, 5},
//            {7168, 7423.34, 360},
//            {6245, 4.99, 1},
//            {9342, 107864.44, 45}
//    };
//
//    cout << "Acct No." << "\t" << "Balance" << "\t" << "Interest Paid" << endl;
//
//    for (int i = 0; i < 8; i++) {
//        double interestPaid;
//        if (accounts[i].Balance > 10000 || accounts[i].DaysSinceDebited > 30) {
//            double interest = 0.06;
//            interestPaid = accounts[i].Balance * interest;
//        } else {
//            double interest = 0.03;
//            interestPaid = accounts[i].Balance * interest;
//        }
//
//        cout << accounts[i].AccountNumber << "\t\t" << accounts[i].Balance << "\t\t" << interestPaid << endl;
//    }

//    Part 3
//    Account accounts[MAXACCOUNTS] = {
//            {1001, 4254.40,20},
//            {7940, 27006.25,35},
//            {4382, 123.5,2},
//            {2651, 85326.92, 14},
//            {3020, 657.1, 5},
//            {7168, 7423.34, 360},
//            {6245, 4.99, 1},
//            {9342, 107864.44, 45}
//    };
//
//    cout << "Acct No." << "\t" << "Balance" << "\t" << "Interest Paid" << endl;
//
//    for (int i = 0; i < 8; i++) {
//        double interest = CalcInterest(accounts[i]);
//        cout << accounts[i].AccountNumber << "\t\t" << accounts[i].Balance << "\t\t" << interest << endl;
//    }

    return 0;


}

