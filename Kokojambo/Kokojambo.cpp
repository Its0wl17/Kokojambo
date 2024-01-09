#include <iostream>
#include <limits>

void program15()
{
    int a, c, d;
    double b;
    std::cout << "Конвертируя дюймы в метрическую систему, введите значение дюймов для конвертации: ";
    std::cin >> a;
    if (std::cin.fail()) {
        std::cout << "\nInput error.";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        return;
    }
    if (a <= 0)
    {
        std::cout << "Количество дюймов должно быть натуральным числом.";
        return;
    }
    b = a * 25.4;
    c = b / 10;
    d = c / 100;
    b = b - c * 10;
    c = c - d * 100;
    std::cout << "\n" << a << " дюйм(ы) = " << d << "м " << c << "см " << b << "мм";
}

void program16()
{
    std::cout << "Введите текущие часы, минуты и секунды: ";
    int h, m, s, x, y, z, s1, m1, h1, d;
    std::cin >> h >> m >> s;
    std::cout << "\nВведите количество времени, которое должно пройти (часы, минуты, секунды): ";
    std::cin >> x >> y >> z;
    if (std::cin.fail()) {
        std::cout << "\nInput error.";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        return;
    }
    if (h <= 0 || m <= 0 || s <= 0 || x <= 0 || y <= 0 || z <= 0)
    {
        std::cout << "Пожалуйста, введите действительные цифры.";
        return;
    }
    else if (h > 24 || m > 60 || s > 60)
    {
        std::cout << "Пожалуйста, введите действительные цифры.";
        return;
    }
    s1 = (s + z) % 60;
    m1 = ((s + z) / 60 + y + m) % 60;
    h1 = (h + (m + y) / 60 + x) % 24;
    d = (h + (m + y) / 60 + x) / 24;
    std::cout << "\nПосле " << d << " дня(ей) это сейчас: " << h1 << " час(а/ов), " << m1 << " минут(ы), " << s1 << " секунд(ы).";
}

void program17()
{
    std::cout << "Введите время начала и время окончания.";
    int h, m, s, h1, m1, s1, t1, t2, t3;
    std::cin >> h >> m >> s >> h1 >> m1 >> s1;
    if (std::cin.fail()) {
        std::cout << "\nInput error.";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        return;
    }
    if (h <= 0 || m <= 0 || s <= 0 || h1 <= 0 || m1 <= 0 || s1 <= 0)
    {
        std::cout << "Пожалуйста, введите действительные цифры.";
        return;
    }
    else if (h > 24 || m > 60 || s > 60 || h1 > 24 || m1 > 60 || s1 > 60)
    {
        std::cout << "Пожалуйста, введите действительные цифры.";
        return;
    }

    t1 = h * 3600 + m * 60 + s;
    t2 = h1 * 3600 + m1 * 60 + s1;
    if (t2 > t1)
    {
        t3 = t2 - t1;
        h = t3 / 3600;
        m = (t3 % 3600) / 60;
        s = (t3 % 3600) % 60;
        std::cout << "Это будет " << h << " час(а,ов) " << m << " минут(ы) " << s << " секунд(ы)";
    }
    else if (t2 < t1)
    {
        t3 = 86400 - (t1 - t2);
        h = t3 / 3600;
        m = t3 % 3600 / 60;
        s = t3 % 3600 % 60;
        std::cout << "Это будет " << h << " час(а,ов) " << m << " минут(ы) " << s << " секунд(ы)";
    }
    else
    {
        std::cout << "\nПрошел один полный день.";
    }
}

void program18()
{
    std::cout << "Введите систему измерения от 1 до 5 (1 - км, 2 - м, 3 - дм, 4 - см, 5 - мм): ";
    int x, y;
    double a;
    std::cin >> x;
    std::cout << "\nВведите значение: ";
    std::cin >> y;
    if (y < 0)
    {
        std::cout << "\nЗначение должно быть положительным (или равным 0).";
        return;
    }
    if (x == 1)
    {
        a = y * 1000;
        std::cout << a << " метр(а,ов).";
    }
    else if (x == 2)
    {
        a = y * 1;
        std::cout << a << " метр(а,ов).";
    }
    else if (x == 3)
    {
        a = y * 0.1;
        std::cout << a << " метр(а,ов).";
    }
    else if (x == 4)
    {
        a = y * 0.01;
        std::cout << a << " метр(а,ов).";
    }
    else if (x == 5)
    {
        a = y * 0.001;
        std::cout << a << " метр(а,ов).";
    }
    else
    {
        std::cout << "Ошибка ввода.";
        return;
    }
}

void program20()
{
    std::cout << "Введите 2 числа: ";
    int a, b;
    double res;
    char c;
    std::cin >> a >> b;
    std::cout << "Введите операцию для продолжения (+,-,/,*): ";
    std::cin >> c;
    if (c == '+')
    {
        res = a + b;
        std::cout << a << " + " << b << " = " << res;
    }
    else if (c == '-')
    {
        res = a - b;
        std::cout << a << " - " << b << " = " << res;
    }
    else if (c == '*')
    {
        res = a * b;
        std::cout << a << " * " << b << " = " << res;
    }
    else if (c == '/')
    {
        res = double(a) / b;
        std::cout << a << " / " << b << " = " << res;
    }
    else
    {
        std::cout << "Ошибка ввода.";
        return;
    }
}

void program21()
{
    std::cout << "Введите число: ";
    int a;
    int c = 0;
    std::cin >> a;
    a = abs(a);
    while (a > 0)
    {
        c++;
        a = a / 10;
    }
    std::cout << "Количество цифр в вашем номере = " << c;
}

void program22()
{
    std::cout << "Введите стартовый капитал = ";
    int k, p, m = 0;
    float s;
    std::cin >> k;
    std::cout << "Введите ежемесячный доход в процентах: ";
    std::cin >> p;
    std::cout << "Введите сумму денег, которая вам нужна: ";
    std::cin >> s;
    if (k < 0 || p < 0 || s < 0 || s < k)
    {
        std::cout << "Введите действительные цифры.";
        return;
    }
    while (k < s)
    {
        k = k + k * ((double)p / 100);
        m++;
        std::cout << "\nСумма в " << m << " месяц = " << k;
    }
    std::cout << "\nВ " << m << " месяц(а / ов) вы достигните своей цели.";
}

void program23()
{
    int p = 0, cu, c = 0;
    do
    {
        std::cout << "Ввод последовательности цифр, если хотите закончить, введите 0: ";
        std::cin >> cu;
        if (p * cu < 0)
        {
            c++;
        }
        p = cu;
    } while (cu != 0);
    std::cout << "Вы заменили знак " << c << " раз";
}

void program24()
{
    srand((int)time(NULL));
    int i;
    double s1 = 0, s2 = 0, s3 = 0;
    for (i = 0; i < 10; i++)
    {
        std::cout << rand() << " ";
        s1 = s1 + rand();
    }
    s1 = s1 / 10.0;
    std::cout << "\nСреднее значение в первой последовательности = " << s1;
    std::cout << "\n";
    for (i = 0; i < 10; i++)
    {
        std::cout << rand() << " ";
        s2 = s2 + rand();
    }
    s2 = s2 / 10.0;
    std::cout << "\nСреднее во второй последовательности = " << s2;
    std::cout << "\n";
    for (i = 0; i < 10; i++)
    {
        std::cout << rand() << " ";
        s3 = s3 + rand();
    }
    s3 = s3 / 10.0;
    std::cout << "\nСреднее в третьей последовательности = " << s3;
}

void program25()
{
    std::cout << "Введите число: ";
    int n;
    std::cin >> n;
    if (n <= 0)
    {
        std::cout << "Пожалуйста, введите действительный номер.";
        return;
    }
    for (int i = 100; i <= 999; i++)
    {
        int a, b, c;
        a = i / 100;
        b = i / 10 % 10;
        c = i % 10;
        if (a + b + c < n)
        {
            std::cout << "\n" << i;
        }
    }
    for (int i = -999; i <= -100; i++)
    {
        int a, b, c;
        a = abs(i) / 100;
        b = abs(i) / 10 % 10;
        c = abs(i) % 10;
        if (a + b + c < n)
        {
            std::cout << "\n" << i;
        }
    }
}

void program26()
{
    for (int i = 100; i < 1000; i++)
    {
        int a, b, c;
        a = i / 100;
        b = i / 10 % 10;
        c = i % 10;
        if (a == b && a == c)
        {
            continue;
        }
        else
        {
            std::cout << "\n" << i;
        }
    }
}

void program27()
{
    std::cout << "Введите числитель и знаменатель: ";
    int a, b, min = 0;
    std::cin >> a >> b;
    if (a < 0 || b < 0)
    {
        std::cout << "Не натуральные числа.";
        return;
    }
    if (a < b)
    {
        min = a;
    }
    else
    {
        min = b;
    }
    for (int i = min; i > 0; i--)
    {
        if (a % i == 0 && b % i == 0)
        {
            std::cout << a << "/" << b << "=" << a / i << "/" << b / i;
            break;
        }
    }
}

void program28()
{
    std::cout << "Введите натуральное число: ";
    int a, x;
    std::cin >> a;
    if (a < 0)
    {
        std::cout << "Число не натуральное.";
        return;
    }
    for (int i = 0; i <= 9; i++)
    {
        bool flag = true;
        x = a;
        while (x != 0)
        {
            if (x % 10 == i)
            {
                flag = false;
                break;
            }
            x = x / 10;
        }
        if (flag == true)
        {
            std::cout << "\n" << i;
        }
    }
}

void program29()
{
    for (int i = 0; i <= 7; i++)
    {
        for (int j = 0; j <= 7; j++)
        {
            if ((i + j) % 2 == 0)
            {
                std::cout << "*";
            }
            else
            {
                std::cout << " ";
            }
        }
        std::cout << "\n";
    }
}

int main()
{
    bool shit;

    //   program15();
    //   program16();
    //   program17();
    //   program18();
    //   program20();
    //   program21();
    //   program22();
    //   program23();
    //   program24();
    //   program25();
    //   program26();
    //   program27();
    //   program28();
    //   program29();

    std::cout << "\nYou wanna try again comrade? (y - 1 , n - 0): ";
    std::cin >> shit;
    if (std::cin.fail()) {
        std::cout << "\nInput error.";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        return 0;
    }

    if (shit)
    {
        main();
    }
    return 0;
}