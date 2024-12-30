#pragma once
using namespace std;

class clsCalculator {

private:

    float _Result = 0;
    float _LastNumber = 0;
    string _LastOperation = "Clear ";

    float _PreviousResult = 0;

    bool _IsZero(float Number) {

        return (Number == 0);
    }

public:

    void Add(float Number) {

        _LastNumber = Number;
        _LastOperation = "Adding ";

        _PreviousResult = _Result;
        _Result += Number;
    }


    void Subtract(float Number) {

        _LastNumber = Number;
        _LastOperation = "Subtracting ";

        _PreviousResult = _Result;
        _Result -= Number;
    }

    void Divide(float Number) {

        _LastNumber = Number;
        _LastOperation = "Dividing ";

        if (_IsZero(Number))
            Number = 1;

        _PreviousResult = _Result;
        _Result /= Number;
    }


    void Multiply(float Number) {

        _LastNumber = Number;
        _LastOperation = "Multiplying ";

        _PreviousResult = _Result;
        _Result *= Number;
    }


    void Clear() {

        _LastNumber = 0;
        _LastOperation = "Clear ";

        _PreviousResult = 0;
        _Result = 0;
    }

    void CancelLastOperation() {

        _LastNumber = 0;
        _LastOperation = "Cancelling Last Operation ";

        _Result = _PreviousResult;
    }

    void PrintResult() {

        cout << "Result After " << _LastOperation << _LastNumber << " is : " << _Result << endl;
    }

};