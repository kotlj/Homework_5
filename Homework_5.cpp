
#include <iostream>
using namespace std;


int main()
{
    int choise;
    while (true)
    {
        cout << "choose task:\n1 - Km, m - Km/h\n2 - hours to work day end\n3 - buy - cost\n4 - percents\n5 - time to day end\n6 - Bank\n0 - exit\n";
        cin >> choise;
        if (choise == 1)
        {
            double distance;
            double minuts;
            cout << "\ninput distance to airport: ";
            cin >> distance;
            cout << "\ninput time in minuts to airport: ";
            cin >> minuts;
            cout << "\nhours to airport: " << distance / (minuts / 60) ;
        }
        if (choise == 2)
        {
            int sec;
            cout << "\ninput time what gone from start of work(8 hours = 28800s): ";
            cin >> sec;
            cout << "\nhours left: " << (28800 - sec) / 3600 ;
        }
        if (choise == 3)
        {
            double price;
            int num_0;
            double percent;
            cout << "\nprice of 1 PC: ";
            cin >> price;
            cout << "\ninput discont: ";
            cin >> percent;
            cout << "\ninput number of PC`s: ";
            cin >> num_0;
            cout << "\ncost: " << price * (percent / 100) * num_0 ;
        }
        if (choise == 4)
        {
            int students;
            int debtors;
            cout << "\ninput number of studens what done homework:\n";
            cin >> students;
            cout << "\ninput number of homework debtors:\n";
            cin >> debtors;
            double sum = students + debtors;
            cout << "\npercents: " << (debtors / sum) * 100 << "\n";
        }
        if (choise == 5)
        {
            int sec;
            const int day_sec = 86400;
            cout << "\ninput seconds from day begin:\n";
            cin >> sec;
            cout << "\nTime to and:\nHours: " << (day_sec - sec) / 3600 << " minuts: " << (day_sec - sec) % 3600 / 60 << "seconds: " << (day_sec - sec) % 60;
        }
        if (choise == 6)
        {
            double money;
            double month;
            double percent;
            cout << "\ninput much money in bank(Grn):\n";
            cin >> money;
            cout << "\ninput period of money contaiment in month:\n";
            cin >> month;
            cout << "\ninput bank percent per year:\n";
            cin >> percent;
            cout << "\nresult:" << money + money * ((month / 12) * percent * 0.01);
        }
        if (choise == 0)
        {
            exit(1);
        }
        cout << "\npress an t key +enter to continue\n";
        string skip;
        cin >> skip;
        system("cls");
    }
}