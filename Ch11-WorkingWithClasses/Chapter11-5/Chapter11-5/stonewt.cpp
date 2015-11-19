// stonewt.cpp -- Stonewt methods
#include "stonewt.h"
#include <iostream>

// construct Stonewt object from double value
Stonewt::Stonewt(double lbs, Mode settingMode) {
    stone = int (lbs) / Lbs_per_stn;    // integer division
    pds_left = int (lbs) % Lbs_per_stn + lbs - int(lbs);
    pounds = lbs;
    mode =settingMode;
}

// construct Stonewt object from stone, double values
Stonewt::Stonewt(int stn, double lbs, Mode settingMode) {
    stone = stn;
    pds_left = lbs;
    pounds =  stn * Lbs_per_stn +lbs;
    mode = settingMode;
}

Stonewt::Stonewt() {        // default constructor, wt = 0
    stone = 0;
    pounds = pds_left = 0.0;
    mode = FLOATING_POUNDS;
}

Stonewt::~Stonewt() {       // destructor
}

void Stonewt::setMode (Mode m) {
    mode = m;
 }

std::ostream& operator<< (std::ostream& os, const Stonewt& st) {
    if (st.mode == Stonewt::STONE ) {
        os<<st.stone<<" stone, "<<st.pds_left << " pounds\n";
    } else if (st.mode == Stonewt::FLOATING_POUNDS ) {
        os<<st.pounds<<" pounds\n";
    } else if (st.mode == Stonewt::INTEGER_POUNDS ) {
        os<<(int)st.pounds << " full pounds\n";
    } else
        os<<"\nBad input!\n";
    return os;
}

Stonewt& operator + (const Stonewt& st1, const Stonewt& st2) {
    double summ_pounds = st1.pounds + st2.pounds;
    double summ_stones = summ_pounds/st1.Lbs_per_stn;
    double summ_lbs_left = fmod(summ_pounds,st1.Lbs_per_stn);
    if (st1.mode == Stonewt::STONE) {
        Stonewt summ((int) summ_stones, summ_lbs_left);
        return  summ;
    } else if ( (st1.mode == Stonewt::INTEGER_POUNDS) || (st1.mode == Stonewt::FLOATING_POUNDS) ) {
        Stonewt summ(summ_pounds);
        return  summ;
    } else {
        std::cout<<"Bad input, the addition cannot be made!\n";
    }
}

Stonewt& operator-(const Stonewt& st1, const Stonewt& st2) {
    double diff_pounds = st1.pounds - st2.pounds;
    double diff_stones = diff_pounds/st1.Lbs_per_stn;
    double diff_lbs_left = fmod(diff_pounds,st1.Lbs_per_stn);
    if (st1.mode == Stonewt::STONE) {
        Stonewt diff((int) diff_stones, diff_lbs_left, Stonewt::STONE);
        return  diff;
    } else if ( (st1.mode == Stonewt::INTEGER_POUNDS) || (st1.mode == Stonewt::FLOATING_POUNDS) ) {
        Stonewt diff(diff_pounds, Stonewt::FLOATING_POUNDS);
        return  diff;
    } else {
        std::cout<<"Bad input, the subtraction cannot be made!\n";
    }
}

Stonewt& operator*(const Stonewt& st1, const double n ) {
    double multi_pounds = st1.pounds * n;
    double multi_stones = multi_pounds/st1.Lbs_per_stn;
    double multi_lbs_left = fmod(multi_pounds,st1.Lbs_per_stn);
    if (st1.mode == Stonewt::STONE) {
        Stonewt multi((int) multi_stones, multi_lbs_left, Stonewt::STONE);
        return  multi;
    } else if ( (st1.mode == Stonewt::INTEGER_POUNDS) || (st1.mode == Stonewt::FLOATING_POUNDS) ) {
        Stonewt multi(multi_pounds, Stonewt::FLOATING_POUNDS);
        return  multi;
    } else {
        std::cout<<"Bad input, the multiplication cannot be made!\n";
    }
}