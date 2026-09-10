#include <time_shield/constants.hpp>

#include <limits>

namespace time_shield {

    // Common millisecond durations
    static_assert(MS_1 == 1, "MS_1");
    static_assert(MS_5 == 5, "MS_5");
    static_assert(MS_10 == 10, "MS_10");
    static_assert(MS_50 == 50, "MS_50");
    static_assert(MS_100 == 100, "MS_100");
    static_assert(MS_250 == 250, "MS_250");
    static_assert(MS_500 == 500, "MS_500");
    static_assert(MS_750 == 750, "MS_750");

    // Common second, minute, and hour durations
    static_assert(SEC_1 == 1, "SEC_1");
    static_assert(SEC_2 == 2, "SEC_2");
    static_assert(SEC_3 == 3, "SEC_3");
    static_assert(SEC_5 == 5, "SEC_5");
    static_assert(SEC_10 == 10, "SEC_10");
    static_assert(SEC_15 == 15, "SEC_15");
    static_assert(SEC_30 == 30, "SEC_30");
    static_assert(MIN_1 == 1, "MIN_1");
    static_assert(MIN_2 == 2, "MIN_2");
    static_assert(MIN_5 == 5, "MIN_5");
    static_assert(MIN_10 == 10, "MIN_10");
    static_assert(MIN_15 == 15, "MIN_15");
    static_assert(MIN_30 == 30, "MIN_30");
    static_assert(HOUR_1 == 1, "HOUR_1");
    static_assert(HOUR_2 == 2, "HOUR_2");
    static_assert(HOUR_3 == 3, "HOUR_3");
    static_assert(HOUR_4 == 4, "HOUR_4");
    static_assert(HOUR_5 == 5, "HOUR_5");
    static_assert(HOUR_8 == 8, "HOUR_8");
    static_assert(HOUR_12 == 12, "HOUR_12");
    static_assert(HOUR_24 == 24, "HOUR_24");

    // Unit conversion constants
    static_assert(NS_PER_US == 1000, "NS_PER_US");
    static_assert(NS_PER_MS == 1000000, "NS_PER_MS");
    static_assert(NS_PER_SEC == 1000000000, "NS_PER_SEC");
    static_assert(US_PER_SEC == 1000000, "US_PER_SEC");
    static_assert(MS_PER_SEC == 1000, "MS_PER_SEC");
    static_assert(MS_PER_1_SEC == MS_PER_SEC, "MS_PER_1_SEC");
    static_assert(MS_PER_5_SEC == 5 * MS_PER_SEC, "MS_PER_5_SEC");
    static_assert(MS_PER_10_SEC == 10 * MS_PER_SEC, "MS_PER_10_SEC");
    static_assert(MS_PER_15_SEC == 15 * MS_PER_SEC, "MS_PER_15_SEC");
    static_assert(MS_PER_30_SEC == 30 * MS_PER_SEC, "MS_PER_30_SEC");
    static_assert(MS_PER_MIN == 60 * MS_PER_SEC, "MS_PER_MIN");
    static_assert(MS_PER_1_MIN == MS_PER_MIN, "MS_PER_1_MIN");
    static_assert(MS_PER_5_MIN == 5 * MS_PER_MIN, "MS_PER_5_MIN");
    static_assert(MS_PER_10_MIN == 10 * MS_PER_MIN, "MS_PER_10_MIN");
    static_assert(MS_PER_15_MIN == 15 * MS_PER_MIN, "MS_PER_15_MIN");
    static_assert(MS_PER_30_MIN == 30 * MS_PER_MIN, "MS_PER_30_MIN");
    static_assert(MS_PER_HALF_HOUR == MS_PER_30_MIN, "MS_PER_HALF_HOUR");
    static_assert(MS_PER_HOUR == 60 * MS_PER_MIN, "MS_PER_HOUR");
    static_assert(MS_PER_1_HOUR == MS_PER_HOUR, "MS_PER_1_HOUR");
    static_assert(MS_PER_2_HOUR == 2 * MS_PER_HOUR, "MS_PER_2_HOUR");
    static_assert(MS_PER_4_HOUR == 4 * MS_PER_HOUR, "MS_PER_4_HOUR");
    static_assert(MS_PER_5_HOUR == 5 * MS_PER_HOUR, "MS_PER_5_HOUR");
    static_assert(MS_PER_8_HOUR == 8 * MS_PER_HOUR, "MS_PER_8_HOUR");
    static_assert(MS_PER_12_HOUR == 12 * MS_PER_HOUR, "MS_PER_12_HOUR");
    static_assert(MS_PER_DAY == 24 * MS_PER_HOUR, "MS_PER_DAY");

    // Second and minute conversion constants
    static_assert(SEC_PER_MIN == 60, "SEC_PER_MIN");
    static_assert(SEC_PER_1_MIN == SEC_PER_MIN, "SEC_PER_1_MIN");
    static_assert(SEC_PER_3_MIN == 3 * SEC_PER_MIN, "SEC_PER_3_MIN");
    static_assert(SEC_PER_5_MIN == 5 * SEC_PER_MIN, "SEC_PER_5_MIN");
    static_assert(SEC_PER_10_MIN == 10 * SEC_PER_MIN, "SEC_PER_10_MIN");
    static_assert(SEC_PER_15_MIN == 15 * SEC_PER_MIN, "SEC_PER_15_MIN");
    static_assert(SEC_PER_HALF_HOUR == 30 * SEC_PER_MIN, "SEC_PER_HALF_HOUR");
    static_assert(SEC_PER_HOUR == 60 * SEC_PER_MIN, "SEC_PER_HOUR");
    static_assert(SEC_PER_1_HOUR == SEC_PER_HOUR, "SEC_PER_1_HOUR");
    static_assert(SEC_PER_2_HOUR == 2 * SEC_PER_HOUR, "SEC_PER_2_HOUR");
    static_assert(SEC_PER_4_HOUR == 4 * SEC_PER_HOUR, "SEC_PER_4_HOUR");
    static_assert(SEC_PER_5_HOUR == 5 * SEC_PER_HOUR, "SEC_PER_5_HOUR");
    static_assert(SEC_PER_8_HOUR == 8 * SEC_PER_HOUR, "SEC_PER_8_HOUR");
    static_assert(SEC_PER_12_HOUR == 12 * SEC_PER_HOUR, "SEC_PER_12_HOUR");
    static_assert(SEC_PER_DAY == 24 * SEC_PER_HOUR, "SEC_PER_DAY");
    static_assert(SEC_PER_YEAR == 365 * SEC_PER_DAY, "SEC_PER_YEAR");
    static_assert(AVG_SEC_PER_YEAR == 36525 * SEC_PER_DAY / 100, "AVG_SEC_PER_YEAR");
    static_assert(SEC_PER_LEAP_YEAR == 366 * SEC_PER_DAY, "SEC_PER_LEAP_YEAR");
    static_assert(SEC_PER_4_YEARS == 1461 * SEC_PER_DAY, "SEC_PER_4_YEARS");
    static_assert(SEC_PER_FIRST_100_YEARS == 36525LL * SEC_PER_DAY, "SEC_PER_FIRST_100_YEARS");
    static_assert(SEC_PER_100_YEARS == 36524LL * SEC_PER_DAY, "SEC_PER_100_YEARS");
    static_assert(SEC_PER_400_YEARS == 146097LL * SEC_PER_DAY, "SEC_PER_400_YEARS");
    static_assert(MAX_SEC_PER_DAY == SEC_PER_DAY - 1, "MAX_SEC_PER_DAY");
    static_assert(MIN_PER_HOUR == 60, "MIN_PER_HOUR");
    static_assert(MIN_PER_DAY == 24 * MIN_PER_HOUR, "MIN_PER_DAY");
    static_assert(MIN_PER_1_DAY == MIN_PER_DAY, "MIN_PER_1_DAY");
    static_assert(MIN_PER_2_DAY == 2 * MIN_PER_DAY, "MIN_PER_2_DAY");
    static_assert(MIN_PER_5_DAY == 5 * MIN_PER_DAY, "MIN_PER_5_DAY");
    static_assert(MIN_PER_7_DAY == 7 * MIN_PER_DAY, "MIN_PER_7_DAY");
    static_assert(MIN_PER_WEEK == MIN_PER_7_DAY, "MIN_PER_WEEK");
    static_assert(MIN_PER_10_DAY == 10 * MIN_PER_DAY, "MIN_PER_10_DAY");
    static_assert(MIN_PER_15_DAY == 15 * MIN_PER_DAY, "MIN_PER_15_DAY");
    static_assert(MIN_PER_30_DAY == 30 * MIN_PER_DAY, "MIN_PER_30_DAY");
    static_assert(MIN_PER_MONTH == 28 * MIN_PER_DAY, "MIN_PER_MONTH");
    static_assert(MAX_MOON_MIN == 42523, "MAX_MOON_MIN");

    // Calendar constants
    static_assert(HOURS_PER_DAY == 24, "HOURS_PER_DAY");
    static_assert(DAYS_PER_WEEK == 7, "DAYS_PER_WEEK");
    static_assert(DAYS_PER_LEAP_YEAR == 366, "DAYS_PER_LEAP_YEAR");
    static_assert(DAYS_PER_YEAR == 365, "DAYS_PER_YEAR");
    static_assert(DAYS_PER_4_YEARS == 1461, "DAYS_PER_4_YEARS");
    static_assert(MONTHS_PER_YEAR == 12, "MONTHS_PER_YEAR");
    static_assert(MAX_DAYS_PER_MONTH == 31, "MAX_DAYS_PER_MONTH");
    static_assert(LEAP_YEAR_PER_100_YEAR == 24, "LEAP_YEAR_PER_100_YEAR");
    static_assert(LEAP_YEAR_PER_400_YEAR == 97, "LEAP_YEAR_PER_400_YEAR");

    // Epoch and range constants
    static_assert(UNIX_EPOCH == 1970, "UNIX_EPOCH");
    static_assert(OLE_EPOCH == 25569, "OLE_EPOCH");
    static_assert(MAX_YEAR == 292277022000LL, "MAX_YEAR");
    static_assert(MIN_YEAR == -2967369602200LL, "MIN_YEAR");
    static_assert(ERROR_YEAR == 9223372036854770000LL, "ERROR_YEAR");
    static_assert(MAX_TIMESTAMP == 9223372005318775LL, "MAX_TIMESTAMP");
    static_assert(MIN_TIMESTAMP == -MAX_TIMESTAMP, "MIN_TIMESTAMP");
    static_assert(MAX_TIMESTAMP_MS == 9223372005318775999LL, "MAX_TIMESTAMP_MS");
    static_assert(MIN_TIMESTAMP_MS == -9223372005318775000LL, "MIN_TIMESTAMP_MS");
    static_assert(ERROR_TIMESTAMP == 9223372036854770000LL, "ERROR_TIMESTAMP");
    static_assert(MAX_OADATE == (std::numeric_limits<double>::max)(), "MAX_OADATE");
    static_assert(AVG_DAYS_PER_YEAR == 365.25, "AVG_DAYS_PER_YEAR");

} // namespace time_shield

int main() {
    return 0;
}
