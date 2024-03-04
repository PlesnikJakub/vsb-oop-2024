#pragma once
class KeyValue
{
private:
	int key;
	double value;
	KeyValue* next;

public:
	KeyValue(int k, double v);
	~KeyValue();

	KeyValue * CreateNext(int k, double v);

	int GetKey();
	double GetValue();
	KeyValue* GetNext();
};

