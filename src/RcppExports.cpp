// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// fromR_convert2geno
IntegerMatrix fromR_convert2geno(const List xodat, const NumericVector map, const IntegerMatrix founder_geno);
RcppExport SEXP simcross_fromR_convert2geno(SEXP xodatSEXP, SEXP mapSEXP, SEXP founder_genoSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< const List >::type xodat(xodatSEXP );
        Rcpp::traits::input_parameter< const NumericVector >::type map(mapSEXP );
        Rcpp::traits::input_parameter< const IntegerMatrix >::type founder_geno(founder_genoSEXP );
        IntegerMatrix __result = fromR_convert2geno(xodat, map, founder_geno);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// fromR_get_geno
IntegerMatrix fromR_get_geno(const List xodat, const double position);
RcppExport SEXP simcross_fromR_get_geno(SEXP xodatSEXP, SEXP positionSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< const List >::type xodat(xodatSEXP );
        Rcpp::traits::input_parameter< const double >::type position(positionSEXP );
        IntegerMatrix __result = fromR_get_geno(xodat, position);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// fromR_sim_crossovers
NumericVector fromR_sim_crossovers(const double L, const int m, const double p, const bool obligate_chiasma, const double Lstar);
RcppExport SEXP simcross_fromR_sim_crossovers(SEXP LSEXP, SEXP mSEXP, SEXP pSEXP, SEXP obligate_chiasmaSEXP, SEXP LstarSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< const double >::type L(LSEXP );
        Rcpp::traits::input_parameter< const int >::type m(mSEXP );
        Rcpp::traits::input_parameter< const double >::type p(pSEXP );
        Rcpp::traits::input_parameter< const bool >::type obligate_chiasma(obligate_chiasmaSEXP );
        Rcpp::traits::input_parameter< const double >::type Lstar(LstarSEXP );
        NumericVector __result = fromR_sim_crossovers(L, m, p, obligate_chiasma, Lstar);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// fromR_sim_meiosis
List fromR_sim_meiosis(const List parent, const int m, const double p, const bool obligate_chiasma, const double Lstar);
RcppExport SEXP simcross_fromR_sim_meiosis(SEXP parentSEXP, SEXP mSEXP, SEXP pSEXP, SEXP obligate_chiasmaSEXP, SEXP LstarSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< const List >::type parent(parentSEXP );
        Rcpp::traits::input_parameter< const int >::type m(mSEXP );
        Rcpp::traits::input_parameter< const double >::type p(pSEXP );
        Rcpp::traits::input_parameter< const bool >::type obligate_chiasma(obligate_chiasmaSEXP );
        Rcpp::traits::input_parameter< const double >::type Lstar(LstarSEXP );
        List __result = fromR_sim_meiosis(parent, m, p, obligate_chiasma, Lstar);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}