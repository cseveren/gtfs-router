#pragma once

#include <Rcpp.h>

constexpr int INFINITE_INT =  std::numeric_limits<int>::max ();

Rcpp::List rcpp_make_timetable (Rcpp::DataFrame stop_times);

Rcpp::DataFrame rcpp_csa (Rcpp::DataFrame timetable,
        Rcpp::DataFrame transfers,
        const size_t nstations,
        const size_t ntrips,
        const std::vector <size_t> start_stations,
        const std::vector <size_t> end_stations,
        const int start_time);

Rcpp::IntegerVector rcpp_csa_isochrone (Rcpp::DataFrame timetable,
        Rcpp::DataFrame transfers,
        const size_t nstations,
        const size_t ntrips,
        const std::vector <size_t> start_stations,
        const int start_time, const int end_time);
