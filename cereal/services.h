/* THIS IS AN AUTOGENERATED FILE, PLEASE EDIT services.py */
#ifndef __SERVICES_H
#define __SERVICES_H
struct service { char name[0x100]; int port; bool should_log; int frequency; int decimation; };
static struct service services[] = {
  { "sensorEvents", 8001, true, 100, 100 },
  { "gpsNMEA", 8002, true, 9, -1 },
  { "deviceState", 8003, true, 1, 1 },
  { "can", 8004, true, 100, -1 },
  { "controlsState", 8005, true, 100, 10 },
  { "pandaStates", 8006, true, 2, 1 },
  { "peripheralState", 8007, true, 2, 1 },
  { "radarState", 8008, true, 20, 5 },
  { "roadEncodeIdx", 8009, false, 20, 1 },
  { "liveTracks", 8010, true, 20, -1 },
  { "sendcan", 8011, true, 100, 139 },
  { "logMessage", 8012, true, 0, -1 },
  { "errorLogMessage", 8013, true, 0, 1 },
  { "liveCalibration", 8014, true, 4, 4 },
  { "liveTorqueParameters", 8015, true, 4, 1 },
  { "androidLog", 8016, true, 0, -1 },
  { "carState", 8017, true, 100, 10 },
  { "carControl", 8018, true, 100, 10 },
  { "longitudinalPlan", 8019, true, 20, 5 },
  { "procLog", 8020, true, 0, -1 },
  { "gpsLocationExternal", 8021, true, 10, 10 },
  { "ubloxGnss", 8023, true, 10, -1 },
  { "qcomGnss", 8024, true, 2, -1 },
  { "clocks", 8025, true, 1, 1 },
  { "ubloxRaw", 8026, true, 20, -1 },
  { "liveLocationKalman", 8027, true, 20, 5 },
  { "liveParameters", 8028, true, 20, 5 },
  { "cameraOdometry", 8029, true, 20, 5 },
  { "lateralPlan", 8030, true, 20, 5 },
  { "thumbnail", 8031, true, 0, 1 },
  { "carEvents", 8032, true, 1, 1 },
  { "carParams", 8033, true, 0, 1 },
  { "roadCameraState", 8034, true, 20, 20 },
  { "driverCameraState", 8035, true, 10, 10 },
  { "driverEncodeIdx", 8036, false, 10, 1 },
  { "driverState", 8037, true, 10, 5 },
  { "driverMonitoringState", 8038, true, 10, 5 },
  { "wideRoadEncodeIdx", 8039, false, 20, 1 },
  { "wideRoadCameraState", 8040, true, 20, 20 },
  { "modelV2", 8041, true, 20, 40 },
  { "managerState", 8042, true, 1, 1 },
  { "uploaderState", 8043, true, 0, 1 },
  { "navInstruction", 8044, true, 0, 10 },
  { "navRoute", 8045, true, 0, -1 },
  { "navThumbnail", 8046, true, 0, -1 },
  { "uiPlan", 8047, true, 20, 40 },
  { "userFlag", 8048, true, 0, 1 },
  { "roadLimitSpeed", 8049, false, 0, -1 },
  { "testJoystick", 8050, false, 0, -1 },
  { "roadEncodeData", 8051, false, 20, -1 },
  { "driverEncodeData", 8052, false, 10, -1 },
  { "wideRoadEncodeData", 8053, false, 20, -1 },
};
#endif

