#include <lib/functions.h>
#include <gtest/gtest.h>
#include <vector>
#include <utility>

// Подробнее https://google.github.io/googletest/reference/testing.html
class ProccessTest : public ::testing::Test {
protected:
    // Добавляем инициализацию данных перед каждым тестом
    void SetUp() override {
        arr = { 10.00, -14.00, 15.00, 20.00, -21.00, 25.00, 3.0 };
    }

    // Освобождаем ресурсы после каждого теста
    void TearDown() override {
        arr.clear();
    }

    // Переменные для тестирования
    std::vector<double> arr;
    std::vector<double> result;
};

// Тест для функции proccess() с тестовыми данными
TEST(ProccessTest, BasicTest) {
    // Готовим входные данные
    std::istringstream input("4\n1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16\n");
    std::ostringstream output;
    std::streambuf* old_cin = std::cin.rdbuf(input.rdbuf());
    std::streambuf* old_cout = std::cout.rdbuf(output.rdbuf());

    // Вызываем функцию
    proccess();

    // Восстанавливаем стандартные потоки ввода-вывода
    std::cin.rdbuf(old_cin);
    std::cout.rdbuf(old_cout);

    // Проверяем результат вывода
    EXPECT_EQ(output.str(), "[TEST SET] №1\n31\nShould be: \n-----------------------------------------\n");
}

// Тест на отрицательные числа
TEST(ProccessTest, NegativeNumbersTest) {
    // Готовим входные данные
    std::istringstream input("3\n-1 -2 -3 -4 -5 -6 -7 -8 -9 -10 -11 -12 -13 -14 -15 -16\n");
    std::ostringstream output;
    std::streambuf* old_cin = std::cin.rdbuf(input.rdbuf());
    std::streambuf* old_cout = std::cout.rdbuf(output.rdbuf());

    // Вызываем функцию
    proccess();

    // Восстанавливаем стандартные потоки ввода-вывода
    std::cin.rdbuf(old_cin);
    std::cout.rdbuf(old_cout);

    // Проверяем результат вывода
    EXPECT_EQ(output.str(), "[TEST SET] №1\n-3\nShould be: \n-----------------------------------------\n");
}

// Тест на нулевые числа
TEST(ProccessTest, ZeroNumbersTest) {
    // Готовим входные данные
    std::istringstream input("2\n0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0\n");
    std::ostringstream output;
    std::streambuf* old_cin = std::cin.rdbuf(input.rdbuf());
    std::streambuf* old_cout = std::cout.rdbuf(output.rdbuf());

    // Вызываем функцию
    proccess();

    // Восстанавливаем стандартные потоки ввода-вывода
    std::cin.rdbuf(old_cin);
    std::cout.rdbuf(old_cout);

    // Проверяем результат вывода
    EXPECT_EQ(output.str(), "[TEST SET] №1\n0\nShould be: \n-----------------------------------------\n");
}

// Тест на одинаковые числа
TEST(ProccessTest, SameNumbersTest) {
    // Готовим входные данные
    std::istringstream input("1\n1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1\n");
    std::ostringstream output;
    std::streambuf* old_cin = std::cin.rdbuf(input.rdbuf());
    std::streambuf* old_cout = std::cout.rdbuf(output.rdbuf());

    // Вызываем функцию
    proccess();

    // Восстанавливаем стандартные потоки ввода-вывода
    std::cin.rdbuf(old_cin);
    std::cout.rdbuf(old_cout);

    // Проверяем результат вывода
    EXPECT_EQ(output.str(), "[TEST SET] №1\n2\nShould be: \n-----------------------------------------\n");
}
TEST(ProccessTest, FirstTest) {
    // Готовим входные данные
    std::istringstream input("4\n1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16\n");
    std::ostringstream output;
    std::streambuf* old_cin = std::cin.rdbuf(input.rdbuf());
    std::streambuf* old_cout = std::cout.rdbuf(output.rdbuf());

    // Вызываем функцию
    proccess();

    // Восстанавливаем стандартные потоки ввода-вывода
    std::cin.rdbuf(old_cin);
    std::cout.rdbuf(old_cout);

    // Проверяем ожидаемые результаты
    EXPECT_EQ(result[0], 33.0);
}

// Пример теста2
TEST(ProccessTest, SecondTest) {
    // Готовим входные данные
    std::istringstream input("4\n1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16\n");
    std::ostringstream output;
    std::streambuf* old_cin = std::cin.rdbuf(input.rdbuf());
    std::streambuf* old_cout = std::cout.rdbuf(output.rdbuf());

    // Вызываем функцию
    proccess();

    // Восстанавливаем стандартные потоки ввода-вывода
    std::cin.rdbuf(old_cin);
    std::cout.rdbuf(old_cout);

    // Проверяем ожидаемые результаты
    EXPECT_EQ(result[1], -4704.0);
}

// Пример теста3
TEST(ProccessTest, ThirdTest) {
    // Готовим входные данные
    std::istringstream input("4\n1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16\n");
    std::ostringstream output;
    std::streambuf* old_cin = std::cin.rdbuf(input.rdbuf());
    std::streambuf* old_cout = std::cout.rdbuf(output.rdbuf());

    // Вызываем функцию
    proccess();

    // Восстанавливаем стандартные потоки ввода-вывода
    std::cin.rdbuf(old_cin);
    std::cout.rdbuf(old_cout);

    // Проверяем ожидаемые результаты
    EXPECT_EQ(result[4], -15876.0);
}

// Пример теста4
TEST(ProccessTest, FourthTest) {
    // Подготавливаем данные для теста
    std::vector<double> arr = { -3.0, 1.5, -4.0, 2.0 };

    // Вызываем функцию proccess с тестовыми данными
    std::vector<double> result = proccess(arr);

    // Проверяем ожидаемые результаты
    EXPECT_EQ(result[0], -27.0);
    EXPECT_EQ(result[1], 1.5);
    EXPECT_EQ(result[2], -64.0);
    EXPECT_EQ(result[3], 2.0);
}