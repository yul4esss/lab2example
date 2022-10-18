#include <iostream>
#include <string>

using namespace std;

class Group {
public:

	void GetListInfo() {
		for (int i = 0; i < length; i++) {
			cout << studentList[i].GetInfo() << endl;
			cout << studentList[i].Grades(length) << endl;
			/*studentList[i].Mark();*/
			cout << "_________________________________" << endl;
		}

	}

private:
	class Student {
	private:
		string surname;
		int gradeBookNum;
		int* grades;
		float avg;
		float* average = &avg;

	public:
		Student(int gradeBookNum, string surname) {
			this->gradeBookNum = gradeBookNum;
			this->surname = surname;
		}


		string GetInfo() {
			return to_string(gradeBookNum) + surname;
		}

		float Grades(int length) {
			float sum = 0;

			grades = new int[length];
			cout << "������: ";
			for (int i = 0; i < length; i++) {
				grades[i] = 51 + rand() % 49;
				cout << grades[i] << ' ';
				sum += grades[i];
			}

			avg = sum / length;


			delete[] grades;

			cout << "\n������ �����������" << endl;
			return avg;
		}


		/*void Mark() {
				if (*average >= 51 && *average <= 70) {
					cout << "������� ������� 3" << endl;
				}
				else if (*average >= 71 && *average <= 89) {
					cout << "������� ������� 4" << endl;
				}
				for (int i = 0; i < length - 1; i++)
					for (int j = 0; j < length - i - 1; j++) {
						if (avg[j] > average[j + 1]) {
							int temp = average[j];
							average[j] = average[j + 1];
							average[j + 1] = temp;
						}
					}
				cout << "ϳ��� ����������: " << endl;
				for (int i = 0; i < length; i++)
					cout << average[i] << endl;


		}*/

	};



	static const int length = 7;


	Student studentList[length]{
		Student(12, "\t\t\t�������"),
		Student(13, "\t\t\t�����"),
		Student(4, "\t\t\t������"),
		Student(10, "\t\t\t���'��"),
		Student(3, "\t\t\t�����"),
		Student(5, "\t\t\t���������"),
		Student(18, "\t\t\t������")

	};
};

int main() {

	setlocale(LC_ALL, "Ukrainian");

	Group a;

	cout << "����� ������� ������ " << "\t" << "������� �������� " << endl;

	a.GetListInfo();

	return 0;
}