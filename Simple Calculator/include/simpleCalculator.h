#pragma once

class SimpleCalculator { // MODIFIED: class name updated
public:
    double sum(int n1, int n2) const;
    double difference(int n1, int n2) const;
    double multiply(int n1, int n2) const;
    double divide(int n1, int n2) const;
    void calculate();
};