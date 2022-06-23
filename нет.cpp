#include <string>
#include <iostream>
#include "windows.h"


using namespace std;


int main()
{
    //Задание 1. Чистота и жир спасут мир.
    setlocale(0, "");

    int growth, weight;

    string gender;

    cout << "Visota: ";

    cin >> growth;


    cout << "Ves: ";
    cin >> weight;


    cout << "Floor ";
    cin >> gender;


    if (gender == "male" || gender == "Male") {
        if (growth - 100 < weight) {
            cout << "Aww man u need to lose " << (growth - 110) - weight << " kg \n \n";
        }
        else {
            cout << "Everything is fine \n \n";
        }
    }
    else if (gender == "female" || gender == "Female") {
        if (growth - 110 < weight) {
            cout << "Aww woman u need to lose " << (growth - 100) - weight << " kg \n \n";
        }
        else {
           cout << "Beauty girl u are ok \n \n";
        }
    }

   //Задание 2. Фейковый прогноз для человека. (кто его вообще придумал блин ааааа)
    
    int Number, Month;
    cout << "Ну чё, погнали номер, месяц и вперёд. ";
    cin >> Number >> Month;


    if (Number >= 19 && Number <= 28 && Month == 2 || Number >= 1 && Number <= 20 && Month == 3) {
        setlocale(0, "");
        cout << "Рыба\n";
        cout << "Ты на днях будешь плавать, но львы будут завидовать\n \n";
    }
    else if (Month == 3 && Number >= 21 && Number <= 31 || Month == 4 && Number >= 1 && Number <= 19) {
        cout << "Овен \n";
        cout << "Будьте бдительны, водолеи разольют воду и вы можете упасть и сломать себе ноги\n \n";
    }
    else if (Month == 4 && Number >= 21 && Number <= 30 || Month == 5 && Number >= 1 && Number <= 20) {
        cout << "Телец \n";
        cout << "Вам нужно много бегать, чтоб не падать от усталости, а лететь \n \n";
    }
    else if (Month == 5 && Number >= 21 && Number <= 31 || Month == 6 && Number >= 1 && Number <= 20) {
        cout << "Близнецы \n";
        cout << "Вас скоро ожидает дуэль с Лермонтовым, потому что один из близнецов словит шизу \n \n";
    }
    else if (Month == 6 && Number >= 21 && Number <= 30 || Month == 7 && Number >= 1 && Number <= 22) {
        cout << "Ура, рак (кто понял отсылку, тот избранный) \n";
        cout << "Не играйте в доту, иначе львы будут агриться на вас\n \n";
    }
    else if (Month == 7 && Number >= 23 && Number <= 31 || Month == 8 && Number >= 1 && Number <= 22) {
        cout << "Лев \n";
        cout << "Вас ожидает счастливая жизнь, если вы её не будете портить другим\n \n";
    }
    else if (Month == 8 && Number >= 23 && Number <= 31 || Month == 9 && Number >= 1 && Number <= 22) {
        cout << "Дева\n";
        cout << "Не ищите счастье, оно само к вам через неделю придёт (в виде денежного перевода) \n \n";
    }
    else if (Month == 9 && Number >= 23 && Number <= 30 || Month == 10 && Number >= 1 && Number <= 22) {
        cout << "Весы \n";
        cout << "Завтра вам предстоит охранять прилавок с арбузами\n \n";
    }
    else if (Month == 10 && Number >= 23 && Number <= 29 || Month == 11 && Number >= 1 && Number <= 21) {
        cout << "Скорпион \n";
        cout << "В скором времени вас ожидает битва с вашим злейшим врагом, имя которого я не назову из-за копирайта\n \n";
    }
    else if (Month == 11 && Number >= 22 && Number <= 30 || Month == 12 && Number >= 1 && Number <= 21) {
        cout << "Стрелец \n";
        cout << "Проводя время на стрельбище, у вас будет больше шансом зацепить свою будущую любовь\n \n";
    }
    else if (Month == 12 && Number >= 22 && Number <= 31 || Month == 1 && Number >= 1 && Number <= 19) {
        cout << "Козерог\n";
        cout << "Работайте не жалея себя и в конце вас будет ждать награда в виде повышения с кассира до уборщика\n \n";
    }
    else if (Month == 1 && Number >= 20 && Number <= 30 || Month == 2 && Number >= 1 && Number <= 18) {
        cout << "Водолей \n";
        cout << "На вас скоро будут воду возить, будьте аккуратны\n \n";
    }
    else {
        cout << "ТЕБЯ НЕ СУЩЕСТВУЕТ, АААААААААААААААААААААААААААААААААААААААААААААААААААА.\n \n";
    }

    // Задание 3. Дата и время (чё, нема шутки, да?)

    setlocale(0, "");

    int Days, Months, Years;
    cout << "Дни ";
    cin >> Days;


    cout << "Месяцы ";
    cin >> Months;


    cout << "Годы ";
    cin >> Years;


    if (Months == 1 && Days >= 1 && Days <= 31) {
        cout << "Дата корректор \n";
        if (Days == 31) {
            cout << "01.02." << Years << "\n \n";
        }
        else {
            cout << Days + 1 << "." << Months << "." << Years << "\n \n";
        }
    }

    else if (Months == 2 && Days >= 1 && Days <= 29) {
        if (Years % 4 == 0 && Days == 29 || Years % 100 == 0 && Years % 400 == 0 && Days == 29) {
            cout << "Дата корректор \n";
            cout << "01.03." << Years << "\n \n";
        }
        else if (Years % 4 != 0 && Days == 29 || Years % 100 != 0 && Days == 29) {
            cout << "Дата не корректор, а замазка \n";
        }

        if (Days == 28) {
            cout << "Дата корректор \n";
            cout << "01.03." << Years << "\n \n";
        }
        else {
            std::cout << Days + 1 << "." << Months << "." << Years << "\n \n";
        }
    }

    else if (Months == 3 && Days >= 1 && Days <= 31) {
        cout << "Дата корректор \n";
        if (Days == 31) {
            cout << "01.04." << Years << "\n \n";
        }
        else {
            cout << Days + 1 << "." << Months << "." << Years << "\n \n";
        }
    }

    else if (Months == 4 && Days >= 1 && Days <= 30) {
        cout << "Дата корректор \n";
        if (Days == 30) {
            cout << "01.05." << Years << "\n \n";
        }
        else {
            cout << Days + 1 << "." << Months << "." << Years << "\n \n";
        }
    }

    else if (Months == 5 && Days >= 1 && Days <= 31) {
        cout << "Дата корректор \n";
        if (Days == 31) {
            cout << "01.06." << Years << "\n \n";
        }
        else {
            cout << Days + 1 << "." << Months << "." << Years << "\n \n";
        }
    }

    else if (Months == 6 && Days >= 1 && Days <= 30) {
        std::cout << "Дата корректор \n";
        if (Days == 30) {
            cout << "01.07." << Years << "\n \n";
        }
        else {
            cout << Days + 1 << "." << Months << "." << Years << "\n \n";
        }
    }

    else if (Months == 7 && Days >= 1 && Days <= 31) {
        cout << "Data is correct \n";
        if (Days == 31) {
            cout << "01.08." << Years << "\n \n";
        }
        else {
            cout << Days + 1 << "." << Months << "." << Years << "\n \n";
        }
    }

    else if (Months == 8 && Days >= 1 && Days <= 31) {
        cout << "Дата корректор \n";
        if (Days == 31) {
            cout << "01.09." << Years << "\n \n";
        }
        else {
            cout << Days + 1 << "." << Months << "." << Years << "\n \n";
        }
    }

    else if (Months == 9 && Days >= 1 && Days <= 30) {
        std::cout << "Дата корректор \n";
        if (Days == 30) {
            cout << "01.10." << Years << "\n \n";
        }
        else {
            std::cout << Days + 1 << "." << Months << "." << Years << "\n \n";
        }
    }

    else if (Months == 10 && Days >= 1 && Days <= 31) {
        cout << "Дата корректор \n";
        if (Days == 31) {
            cout << "01.11." << Years << "\n \n";
        }
        else {
            std::cout << Days + 1 << "." << Months << "." << Years << "\n \n";
        }
    }

    else if (Months == 11 && Days >= 1 && Days <= 30) {
        cout << "Data is correct \n";
        if (Days == 30) {
            cout << "01.12." << Years << "\n \n";
        }
        else {
            cout << Days + 1 << "." << Months << "." << Years << "\n \n";
        }
    }

    else if (Months == 12 && Days >= 1 && Days <= 31) {
        std::cout << "Дата корректор \n";
        if (Days == 31) {
            cout << "01.01." << Years + 1 << "\n \n";
        }
        else {
            cout << Days + 1 << "." << Months << "." << Years << "\n \n";
        }
    }

    //Задание 4. Кто хочет стать миллионером (по Айзеку)

    int count = 0;
    int Answer;
    cout << "Здарова, чел, хочешь денег? Конечно хочешь, \n я через экран чувствую как у тебя чешутся руки\n1) Да\n2) Не хочу\n";
    cin >> Answer;


    if (Answer == 1) {
        cout << "Я так и знал, чтож, поехали. Итак, первый вопрос. \nКакой обычно урон у большинства персонажей? \n1)5.60\n2)4\n3) 3.50\n4)Памагите\n";
        cin >> Answer;
        if (Answer == 4) {
            count -= 5;
            cout << "Этот урон является дробным числом\n";
            cout << "\n1)5.60\n2)4\n3) 3.50\n";
            cin >> Answer;
            if (Answer == 3) {
                count += 10;
                cout << "Чел, харош, ты заработал " << count << " очков\n";
            }
            else
            {
                count -= 8;
                cout << "НЕПРААААВИЛЬНО\n У тебя " << count << " очков\n";
            }
        }
        else {
            if (Answer == 3) {
                count += 10;
                cout << "Чел, харош, ты заработал " << count << " очков\n";
            }
            else {
                count -= 8;
                cout << "НЕПРААААВИЛЬНО\n У тебя " << count << " очков\n";
            }
        }


        cout << "Что делает Бримстоун?\n1)Даёт большой лазерный луч\n2)Колоссально увеличивает урон\n3)Удваивает пули персонажа\n4)Памагите\n";
        cin >> Answer;
        if (Answer == 4) {
            count -= 5;
            cout << "Описание гласит ""Кровавый поток""\n";
            cout << "1)Даёт большой лазерный луч\n2)Колоссально увеличивает урон\n3)Удваивает пули персонажа\n";
            cin >> Answer;
            if (Answer == 1) {
                count += 10;
                std::cout << "Чел, харош, ты заработал " << count << " очков\n";
            }
            else
            {
                count -= 8;
                std::cout << "НЕПРААААВИЛЬНО\n У тебя " << count << " очков\n";
            }
        }
        else {
            if (Answer == 1) {
                count += 10;
                std::cout << "Чел, харош, ты заработал " << count << " очков\n";
            }
            else {
                count -= 8;
                std::cout << "НЕПРААААВИЛЬНО\n У тебя " << count << " очков\n";
            }
        }


        cout << "Сколько всего персонажей в игре?\n1)34\n2)51\n3)25\n4)Памагите\n";
        cin >> Answer;
        if (Answer == 4) {
            count -= 5;
            cout << "23 персонажа было добавлено в дополнениях\n";
            cout << "1)34\n2)51\n3)25\n";
            cin >> Answer;
            if (Answer == 1) {
                count += 10;
                cout << "Чел, харош, ты заработал " << count << " очков\n";
            }
            else
            {
                count -= 8;
                cout << "НЕПРААААВИЛЬНО\n У тебя " << count << " очков\n";
            }
        }
        else {
            if (Answer == 1) {
                count += 10;
                cout << "Чел, харош, ты заработал " << count << " очков\n";
            }
            else {
                count -= 8;
                cout << "НЕПРААААВИЛЬНО\n У тебя " << count << " очков\n";
            }
        }


        cout << "Какой персонаж умеет на выбор брать артефакт в комнате со сделкой\n дьявола, чьи предметы он возьмёт не теряя сердец\n1)Хранитель\n2)Потерянный\n3)Азазель\n4)Памагите\n";
        cin >> Answer;
        if (Answer == 4) {
            count -= 5;
            cout << "У этого персонажа спектральные слёзы\n";
            cout << "1)Хранитель\n2)Потерянный\n3)Азазель\n";
            cin >> Answer;
            if (Answer == 2) {
                count += 10;
                cout << "Чел, харош, ты заработал " << count << " очков\n";
            }
            else
            {
                count -= 8;
                std::cout << "Чел, харош, ты заработал " << count << " очков\n";
            }
        }
        else {
            if (Answer == 2) {
                count += 10;
                std::cout << "Чел, харош, ты заработал " << count << " очков\n";
            }
            else {
                count -= 8;
                std::cout << "НЕПРААААВИЛЬНО\n У тебя " << count << " очков\n";
            }
        }


        cout << "Что значит число 109?\n1)Ничего\n2)Количество монет для большого урона\n3)Путь к открытию персонажа\n4)Памагите\n";
        cin >> Answer;
        if (Answer == 4) {
            count -= 5;
            cout << "Это был самый крупный секрет во всём Айзеке\n";
            cout << "1)Ничего\n2)Количество монет для большого урона\n3)Путь к открытию персонажа\n";
            cin >> Answer;
            if (Answer == 3) {
                count += 10;
                cout << "Чел, харош, ты заработал " << count << " очков\n";
            }
            else
            {
                count -= 8;
                cout << "НЕПРААААВИЛЬНО\n У тебя" << count << " очков\n";
            }
        }
        else {
            if (Answer == 3) {
                count += 10;
                cout << "Чел, харош, ты заработал" << count << " очков\n";
            }
            else {
                count -= 8;
                cout << "НЕПРААААВИЛЬНО\n У тебя" << count << " очков\n";
            }
        }


        


    }
    if (count >= 35) {
       
        cout << "ПОЗДРАВЛЯЮ, ТЫ НАСТОЯЩИЙ ЗАДРОТ ПО АЙЗЕКУ";
    }
    else {
        cout << "Скройся с глаз моих долой, нубик";
    }

}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
