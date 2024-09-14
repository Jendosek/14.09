#include <iostream>
using namespace std;

struct BirthDate {
    int day;
    int month;
    int year;

    BirthDate(int day, int month, int year)
    {
        this->day = day;
        this->month = month;
        this->year = year;
    }
    void print_date()
    {
        cout << day << "." << day << "." << day;
    }
};

class Student
{
    string _name;
    BirthDate *_birthDate;
    string _phone;
    string _city;
    string _country;
    string _university;
    string _universityCity;
    string _universityCountry;
    string _groupNumber;
public:
    Student()
    {
        _name = "";
        _birthDate = new BirthDate(0, 0, 0);
        _phone = "";
        _city = "";
        _country = "";
        _university = "";
        _universityCity = "";
        _universityCountry = "";
        _groupNumber = "";

    }

    Student(string name) : Student()
    {
        SetName(name);
    }
    Student(string name, BirthDate* birthDate) : Student(name)
    {
        SetDate(birthDate);
    }
    Student(string name, BirthDate *birthDate, string phone) : Student(name, birthDate)
    {
        SetPhone(phone);
    }
    Student(string name, BirthDate* birthDate, string phone, string city) : Student(name, birthDate, phone)
    {
        SetCity(city);
    }
    Student(string name, BirthDate* birthDate, string phone, string city, string country) : Student(name, birthDate, phone, city)
    {
        SetCountry(country);
    }
    Student(string name, BirthDate* birthDate, string phone, string city, string country, string university) : Student(name, birthDate, phone, city, country)
    {
        SetUniversity(university);
    }
    Student(string name, BirthDate* birthDate, string phone, string city, string country, string university, string universityCity) : Student(name, birthDate, phone, city, country, university)
    {
        SetUniversityCity(universityCity);
    }
    Student(string name, BirthDate* birthDate, string phone, string city, string country, string university, string universityCity, string universityCountry) : Student(name, birthDate, phone, city, country, university, universityCity)
    {
        SetUniversityCountry(universityCountry);
    }
    Student(string name, BirthDate* birthDate, string phone, string city, string country, string university, string universityCity, string universityCountry, string groupNumber) : Student(name, birthDate, phone, city, country, university, universityCity, universityCountry)
    {
        SetGroup(groupNumber);
    }

    void SetName(string name)
    {
        this->_name = name;
    }
    void SetDate(BirthDate* birthDate)
    {
        this->_birthDate = birthDate;
    }
    void SetPhone(string phone)
    {
        this->_phone = phone;
    }
    void SetCity(string city)
    {
        this->_city = city;
    }
    void SetCountry(string country)
    {
        this->_country = _country;
    }
    void SetUniversity(string university)
    {
        this->_university = university;
    }
    void SetUniversityCity(string universityCity)
    {
        this->_universityCity = universityCity;
    }
    void SetUniversityCountry(string universityCountry)
    {
        this->_universityCountry = universityCountry;
    }
    void SetGroup(string groupNumber)
    {
        this->_groupNumber = groupNumber;
    }

    string GetName()
    {
        return this->_name;
    }
    BirthDate* GetDate()
    {
        return this->_birthDate;
    }
    string GetPhone()
    {
        return this->_phone;
    }
    string GetCity()
    {
        return this->_city;
    }
    string GetCountry()
    {
        return this->_country;
    }
    string GetUniversity()
    {
        return this->_university;
    }
    string GetUniversityCity()
    {
        return this->_universityCity;
    }
    string GetUniversityCountry()
    {
        return this->_universityCountry;
    }
    string GetGroup()
    {
        return this->_groupNumber;
    }

    ~Student()
    {
        delete _birthDate;
    }

    void print()
    {
        cout << "Name: " << GetName() << endl;
        cout << "Birthday: ";
        _birthDate->print_date();
        cout << endl;

        cout << "Phone: " << GetPhone() << endl;
        cout << "City: " << GetCity() << endl;
        cout << "Country: " << GetCountry() << endl;
        cout << "University: " << GetUniversity() << endl;
        cout << "UniversityCity: " << GetUniversityCity() << endl;
        cout << "UniversityCountry: " << GetUniversityCountry() << endl;
        cout << "Group: " << GetGroup() << endl;
    }
};

int main() {
    Student student;
    student.SetName("Vova");
    BirthDate* bd = new BirthDate(12, 12, 2012);
    student.SetDate(bd);
    student.SetPhone("+11111111");
    student.SetCity("Vin");
    student.SetCountry("Ukraine");
    student.SetUniversity("VTC");
    student.SetUniversityCity("Vin");
    student.SetUniversityCountry("Uk");
    student.SetGroup("3ki2");

    student.print();
}