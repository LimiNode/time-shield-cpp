#define TIME_SHIELD_ENABLE_LEGACY_ALIASES

#include <time_shield/config.hpp>
#include <time_shield/types.hpp>
#include <time_shield/constants.hpp>
#include <time_shield/enums.hpp>
#include <time_shield/time_struct.hpp>
#include <time_shield/date_struct.hpp>
#include <time_shield/date_time_struct.hpp>
#include <time_shield/iso_week_struct.hpp>
#include <time_shield/time_zone_struct.hpp>
#include <time_shield/time_utils.hpp>
#include <time_shield/validation.hpp>
#include <time_shield/initialization.hpp>
#include <time_shield/time_unit_conversions.hpp>
#include <time_shield/unix_time_conversions.hpp>
#include <time_shield/date_conversions.hpp>
#include <time_shield/date_time_conversions.hpp>
#include <time_shield/iso_week_conversions.hpp>
#include <time_shield/workday_conversions.hpp>
#include <time_shield/ole_automation_conversions.hpp>
#include <time_shield/time_zone_offset.hpp>
#include <time_shield/time_zone_offset_conversions.hpp>
#include <time_shield/time_conversion_aliases.hpp>
#include <time_shield/legacy_aliases.hpp>
#include <time_shield/time_conversions.hpp>
#include <time_shield/time_format_parser.hpp>
#include <time_shield/time_parser.hpp>
#include <time_shield/time_formatting.hpp>
#include <time_shield/DateTime.hpp>
#include <time_shield/time_zone_conversions.hpp>
#include <time_shield/ZonedClock.hpp>
#include <time_shield/julian_conversions.hpp>
#include <time_shield/astronomy_conversions.hpp>
#include <time_shield/MoonPhase.hpp>
#include <time_shield/CpuTickTimer.hpp>
#include <time_shield/DeadlineTimer.hpp>
#include <time_shield/ElapsedTimer.hpp>
#include <time_shield/TimerScheduler.hpp>
#include <time_shield/detail/floor_math.hpp>

#if TIME_SHIELD_ENABLE_NTP_CLIENT
#   include <time_shield/ntp_client.hpp>
#   include <time_shield/ntp_client_pool.hpp>
#   include <time_shield/ntp_client_pool_runner.hpp>
#   include <time_shield/ntp_time_service.hpp>
#   include <time_shield/ntp_client/ntp_client_core.hpp>
#   include <time_shield/ntp_client/ntp_packet.hpp>
#   include <time_shield/ntp_client/udp_transport.hpp>
#endif

int main() {
    return 0;
}
