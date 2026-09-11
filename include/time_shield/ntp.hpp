// SPDX-License-Identifier: MIT
#pragma once
#ifndef TIME_SHIELD_HEADER_NTP_HPP_INCLUDED
#define TIME_SHIELD_HEADER_NTP_HPP_INCLUDED

#include <time_shield/core.hpp>

#if TIME_SHIELD_ENABLE_NTP_CLIENT
#   include <time_shield/ntp/ntp_client.hpp>
#   include <time_shield/ntp/ntp_client_pool.hpp>
#   include <time_shield/ntp/ntp_client_pool_runner.hpp>
#   include <time_shield/ntp/ntp_time_service.hpp>
#endif

#endif // TIME_SHIELD_HEADER_NTP_HPP_INCLUDED
