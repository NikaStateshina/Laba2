#include <string>
#include <iostream>
using namespace std;

//������ ����� 
class agency {
private:
	std::string from_station;
	std::string to_station;
public:
	//�����������
	agency::agency(std::string _from_station, std::string _to_station);
	{
		from_station = _from_station;
		to_station = _to_station;
	}
	//get
	string agency::getFrom() const {
		return from_station;
	}
	string agency::getTo() const {
		return to_station;
	}
	//
	void print() const
	{
		std::cout << "��������� ���� � " << to_station << " ! " << std::endl;
	}
};

//������ �����
class train: public agency {
private:
	unsigned short int::num_van;
public:
	//�����������
	train::train(std::string _from_station, std::string _to_station, unsigned short int::_num_van) :agency(_from_station, _to_station) {
		num_van = _num_van;
	}
};

//������ �����
class van : public train {
private:
	unsigned short int : : num_seat;
public:
	van::van(std::string _from_station, std::string _to_station, unsigned short int::_num_van, unsigned short int : : _num_seat) : train(num_van) {
		num_seat = _num_seat;
	}
};

int main() {
	van van1 = van (������, �����������, 3, 15);
	//van1.print();
	cout << "dd";
	return 0;
}