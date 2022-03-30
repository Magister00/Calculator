#pragma once

int main()
{
	double cash, dif, thousand, fivehundred, twohundred, onehundred, fifty, twenty, ten, five, two, one, x, date;
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
	date = System::Convert::ToDouble(time->Text);

	cash = (thousand * 1000) + (fivehundred * 500) + (twohundred * 200) + (onehundred * 100) + (fifty * 50) + (twenty * 20) + (ten * 10) + (five * 5) + (two * 2) + one;
	dif = cash - x;

	label11->Text = System::Convert::ToString(cash);

	if (dif < 0)
	{
		MessageBox::Show("В касі не вистачає: " + System::Convert::ToString(dif) + " грн " + "\n Саня шо робить? ", "Різниця");
	}
	else if (dif > 0)
	{
		MessageBox::Show("В касі більше на: " + System::Convert::ToString(dif) + " грн " + "\n Ну шо? На каву? ", "Різниця");
	}
	else if (dif == 0)
	{
		MessageBox::Show("В касі всьо гуд :) " + "\n Сьогодні не фартануло, кава за свій рахунок ", "Різниця");
	}
}