#include "MyForm.h"
#include <stdio.h>
#include <iostream>
#include <cstdlib>
#include <string>
#include <fstream>
#include <ctime>


using namespace System;
using namespace System::Windows::Forms;
[STAThread]
void main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Project1::MyForm form;
	Application::Run(% form);
}
double cash, x, inc, dif2, money;
System::Void Project1::MyForm::button1_Click(System::Object^ sender, System::EventArgs^ e)
{
		double dif, thousand, fivehundred, twohundred, onehundred, fifty, twenty, ten, five, two, one;
		thousand = System::Convert::ToDouble(num1->Text);
		fivehundred = System::Convert::ToDouble(num2->Text);
		twohundred = System::Convert::ToDouble(num3->Text);
		onehundred = System::Convert::ToDouble(num4->Text);
		fifty = System::Convert::ToDouble(num5->Text);
		twenty = System::Convert::ToDouble(num6->Text);
		ten = System::Convert::ToDouble(num7->Text);
		five = System::Convert::ToDouble(num8->Text);
		two = System::Convert::ToDouble(num9->Text);
		one = System::Convert::ToDouble(num10->Text);
		x = System::Convert::ToDouble(num11->Text);
		inc = System::Convert::ToDouble(num12->Text);

		cash = (thousand * 1000) + (fivehundred * 500) + (twohundred * 200) + (onehundred * 100) + (fifty * 50) + (twenty * 20) + (ten * 10) + (five * 5) + (two * 2) + one;
		dif = cash - x;
		dif2 = (money + x) - inc;

		label11->Text = System::Convert::ToString(cash - inc);

		if (dif < 0)
		{
			MessageBox::Show("� ��� �� �������: " + System::Convert::ToString(dif) + " ��� " + "\n ���� �� ������? ", "г�����");
		}
		else if (dif > 0)
		{
			MessageBox::Show("� ��� ����� ��: " + System::Convert::ToString(dif) + " ��� " + "\n �� ��? �� ����? ", "г�����");
		}
		else if (dif == 0)
		{
			MessageBox::Show("� ��� ���� ��� :) " + "\n ������� �� ���������, ���� �� ��� ������� ", "г�����");
		}
    return System::Void();
}

System::Void Project1::MyForm::��������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	
	time_t now = time(0);
	tm* ltm = localtime(&now);
	char buffer[80];
	

	// �������� ������ �����

	std::ofstream file("Service.txt", std::ios::app); 

	if (!file)
	{
		MessageBoxIcon::Error;
		MessageBox::Show("�������!");
	}
	else
		file << dif2 << std::endl;
	file.close();

	std::ifstream file2("Service.txt"); // ������ ��

	if (!file2)
	{
		MessageBoxIcon::Error;
		MessageBox::Show("�������!");
	}
	else
		file2 >> money;
	file2.close();

	// �������� �������

	std::ofstream myfile ("History.txt", std::ios::app); 

	if (!myfile)  //���� ���� ����������
	{
		MessageBoxIcon::Error;
		MessageBox::Show("�������!");
	}
	else
	{
		strftime(buffer, 80, "%d.%m.%Y", ltm);
		myfile << "||      ����      ||   X    ||���������||__�����__ ||" << std::endl;
		myfile << "|| " << buffer << "  ||" << x << "  ||" << inc << " ���  ||   " << dif2 << " ||" << std::endl;
		myfile.close();
	}
	return System::Void();
}

System::Void Project1::MyForm::������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	num1->Text = "0";
	num2->Text = "0";
	num3->Text = "0";
	num4->Text = "0";
	num5->Text = "0";
	num6->Text = "0";
	num7->Text = "0";
	num8->Text = "0";
	num9->Text = "0";
	num10->Text = "0";
	num11->Text = "0";
	num12->Text = "00000";

	return System::Void();
}

System::Void Project1::MyForm::����������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	MessageBox::Show("");
	return System::Void();
}

