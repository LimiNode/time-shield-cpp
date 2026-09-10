#define TIME_SHIELD_ENABLE_LEGACY_ALIASES
#include <time_shield.hpp>

#include "test_assert.hpp"

int main() {
    const time_shield::ts_t timestamp = time_shield::to_timestamp(2024, 6, 30, 12, 0, 0);
    const time_shield::ts_ms_t timestamp_ms = time_shield::sec_to_ms(timestamp);
    const time_shield::DateStruct date{2024, 6, 30};

    TIME_SHIELD_TEST_CHECK(time_shield::get_unix_year<>(time_shield::SEC_PER_YEAR) == 1);
    TIME_SHIELD_TEST_CHECK(time_shield::get_unix_day<>(time_shield::SEC_PER_DAY) == 1);
    TIME_SHIELD_TEST_CHECK(time_shield::get_unix_day_ms<>(time_shield::MS_PER_DAY) == 1);
    TIME_SHIELD_TEST_CHECK(time_shield::unix_day_to_timestamp(2) == 2 * time_shield::SEC_PER_DAY);
    TIME_SHIELD_TEST_CHECK(time_shield::unix_day_to_timestamp_ms(2) == 2 * time_shield::MS_PER_DAY);
    TIME_SHIELD_TEST_CHECK(time_shield::get_unix_min<>(time_shield::SEC_PER_MIN) == 1);
    TIME_SHIELD_TEST_CHECK(time_shield::get_year<>(timestamp) == 2024);
    TIME_SHIELD_TEST_CHECK(time_shield::get_year_ms<>(timestamp_ms) == 2024);
    TIME_SHIELD_TEST_CHECK(time_shield::get_weekday_from_date<>(date) == time_shield::SUN);
    TIME_SHIELD_TEST_CHECK(time_shield::get_weekday_from_ts<>(timestamp) == time_shield::SUN);
    TIME_SHIELD_TEST_CHECK(time_shield::get_weekday_from_ts_ms<>(timestamp_ms) == time_shield::SUN);

    return 0;
}
