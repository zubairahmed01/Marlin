/**
 * Marlin 3D Printer Firmware
 * Copyright (C) 2016 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (C) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

/**
 * Simplified Chinese
 *
 * LCD Menu Messages
 * See also http://marlinfw.org/docs/development/lcd_language.html
 *
 */
#ifndef LANGUAGE_ZH_CN_H
#define LANGUAGE_ZH_CN_H

#define CHARSIZE 3

#define WELCOME_MSG                         MACHINE_NAME _UxGT("�Ѿ���.")  //" ready."
#define MSG_BACK                            _UxGT("����")         // ��Back��
#define MSG_SD_INSERTED                     _UxGT("�洢���Ѳ���")  //"Card inserted"
#define MSG_SD_REMOVED                      _UxGT("�洢�����γ�")  //"Card removed"
#define MSG_LCD_ENDSTOPS                    _UxGT("����")  //"Endstops" // Max length 8 characters
#define MSG_MAIN                            _UxGT("���˵�")  //"Main"
#define MSG_AUTOSTART                       _UxGT("�Զ���ʼ")  //"Autostart"
#define MSG_DISABLE_STEPPERS                _UxGT("�رղ������")  //"Disable steppers"
#define MSG_DEBUG_MENU                      _UxGT("���Բ˵�")    // "Debug Menu"
#define MSG_PROGRESS_BAR_TEST               _UxGT("����������")  // "Progress Bar Test"
#define MSG_AUTO_HOME                       _UxGT("��ԭ��")  //"Auto home"
#define MSG_AUTO_HOME_X                     _UxGT("��Xԭλ")  //"Home X"
#define MSG_AUTO_HOME_Y                     _UxGT("��Yԭλ")  //"Home Y"
#define MSG_AUTO_HOME_Z                     _UxGT("��Zԭλ")  //"Home Z"
#define MSG_TMC_Z_CALIBRATION               _UxGT("�SУ׼Z")  //"Calibrate Z"
#define MSG_LEVEL_BED_HOMING                _UxGT("ƽ̨��ƽXYZ��ԭλ")  //"Homing XYZ"
#define MSG_LEVEL_BED_WAITING               _UxGT("������ʼ�ȴ���ƽ")  //"Click to Begin"
#define MSG_LEVEL_BED_NEXT_POINT            _UxGT("�¸��ȴ���ƽ��")  //"Next Point"
#define MSG_LEVEL_BED_DONE                  _UxGT("����ȴ���ƽ")  //"Leveling Done!"
#define MSG_Z_FADE_HEIGHT                   _UxGT("�����߶�")     // "Fade Height"
#define MSG_SET_HOME_OFFSETS                _UxGT("����ԭ��ƫ��")  //"Set home offsets"
#define MSG_HOME_OFFSETS_APPLIED            _UxGT("ƫ��������")  //"Offsets applied"
#define MSG_SET_ORIGIN                      _UxGT("����ԭ��")  //"Set origin"
#define MSG_PREHEAT_1                       _UxGT("Ԥ��PLA")  //"Preheat PLA"
#define MSG_PREHEAT_1_N                     MSG_PREHEAT_1 _UxGT(" ")  //MSG_PREHEAT_1 " "
#define MSG_PREHEAT_1_ALL                   MSG_PREHEAT_1 _UxGT(" ȫ��")  //MSG_PREHEAT_1 " All"
#define MSG_PREHEAT_1_BEDONLY               MSG_PREHEAT_1 _UxGT(" �ȴ�")  //MSG_PREHEAT_1 " Bed"
#define MSG_PREHEAT_1_SETTINGS              MSG_PREHEAT_1 _UxGT(" ����")  //MSG_PREHEAT_1 " conf"
#define MSG_PREHEAT_2                       _UxGT("Ԥ��ABS")  //"Preheat ABS"
#define MSG_PREHEAT_2_N                     MSG_PREHEAT_2 _UxGT(" ")  //MSG_PREHEAT_2 " "
#define MSG_PREHEAT_2_ALL                   MSG_PREHEAT_2 _UxGT(" ȫ��")  //MSG_PREHEAT_2 " All"
#define MSG_PREHEAT_2_BEDONLY               MSG_PREHEAT_2 _UxGT(" �ȴ�")  //MSG_PREHEAT_2 " Bed"
#define MSG_PREHEAT_2_SETTINGS              MSG_PREHEAT_2 _UxGT(" ����")  //MSG_PREHEAT_2 " conf"
#define MSG_COOLDOWN                        _UxGT("����")  //"Cooldown"
#define MSG_SWITCH_PS_ON                    _UxGT("��Դ��")  //"Switch power on"
#define MSG_SWITCH_PS_OFF                   _UxGT("��Դ�ر�")  //"Switch power off"
#define MSG_EXTRUDE                         _UxGT("����")  //"Extrude"
#define MSG_RETRACT                         _UxGT("�س�")  //"Retract"
#define MSG_MOVE_AXIS                       _UxGT("�ƶ���")  //"Move axis"
#define MSG_BED_LEVELING                    _UxGT("��ƽ�ȴ�")  //"Bed leveling"
#define MSG_LEVEL_BED                       _UxGT("��ƽ�ȴ�")  //"Level bed"
#define MSG_LEVEL_CORNERS                   _UxGT("��ƽ�߽�") // "Level corners"

#define MSG_NEXT_CORNER                     _UxGT("�¸��߽�") // "Next corner"
#define MSG_EDITING_STOPPED                 _UxGT("����༭��ֹͣ") // "Mesh Editing Stopped"

#define MSG_USER_MENU                       _UxGT("��������") // "Custom Commands"
#define MSG_UBL_DOING_G29                   _UxGT("ִ��G29") // "Doing G29"
#define MSG_UBL_UNHOMED                     _UxGT("�Ȼ�XYZԭ��") // "Home XYZ first"
#define MSG_UBL_TOOLS                       _UxGT("UBL����") // "UBL Tools"
#define MSG_UBL_LEVEL_BED                   _UxGT("ͳһ�ȴ���ƽ(UBL)") // "Unified Bed Leveling"
#define MSG_UBL_MANUAL_MESH                 _UxGT("�ֹ���������") // "Manually Build Mesh"

#define MSG_UBL_BC_INSERT                   _UxGT("���õ�Ƭ������") // "Place shim & measure"
#define MSG_UBL_BC_INSERT2                  _UxGT("����") // "Measure"
#define MSG_UBL_BC_REMOVE                   _UxGT("�Ƴ��������ȴ�") // "Remove & measure bed"
#define MSG_UBL_MOVING_TO_NEXT              _UxGT("�ƶ�����һ��") // "Moving to next"
#define MSG_UBL_ACTIVATE_MESH               _UxGT("����UBL") // "Activate UBL"
#define MSG_UBL_DEACTIVATE_MESH             _UxGT("�ر�UBL") // "Deactivate UBL"
#define MSG_UBL_SET_BED_TEMP                _UxGT("�����ȴ��¶�") // "Bed Temp"
#define MSG_UBL_SET_HOTEND_TEMP             _UxGT("�ȶ��¶�") // "Hotend Temp"
#define MSG_UBL_MESH_EDIT                   _UxGT("����༭") // "Mesh Edit"
#define MSG_UBL_EDIT_CUSTOM_MESH            _UxGT("�༭�ͻ�����") // "Edit Custom Mesh"
#define MSG_UBL_FINE_TUNE_MESH              _UxGT("ϸ������") // "Fine Tuning Mesh"
#define MSG_UBL_DONE_EDITING_MESH           _UxGT("��ɱ༭����") // "Done Editing Mesh"
#define MSG_UBL_BUILD_CUSTOM_MESH           _UxGT("����ͻ�����") // "Build Custom Mesh"
#define MSG_UBL_BUILD_MESH_MENU             _UxGT("��������") // "Build Mesh"
#define MSG_UBL_BUILD_PLA_MESH              _UxGT("����PLA����") // "Build PLA Mesh"
#define MSG_UBL_BUILD_ABS_MESH              _UxGT("����ABS����") // "Build ABS Mesh"
#define MSG_UBL_BUILD_COLD_MESH             _UxGT("����������") // "Build Cold Mesh"
#define MSG_UBL_MESH_HEIGHT_ADJUST          _UxGT("��������߶�") // "Adjust Mesh Height"
#define MSG_UBL_MESH_HEIGHT_AMOUNT          _UxGT("�߶Ⱥϼ�") // "Height Amount"
#define MSG_UBL_VALIDATE_MESH_MENU          _UxGT("��׼����") // "Validate Mesh"
#define MSG_UBL_VALIDATE_PLA_MESH           _UxGT("��׼PLA����") // "Validate PLA Mesh"
#define MSG_UBL_VALIDATE_ABS_MESH           _UxGT("��׼ABS����") // "Validate ABS Mesh"
#define MSG_UBL_VALIDATE_CUSTOM_MESH        _UxGT("��׼�ͻ�����") // "Validate Custom Mesh"
#define MSG_UBL_CONTINUE_MESH               _UxGT("�����ȴ�����") // "Continue Bed Mesh"
#define MSG_UBL_MESH_LEVELING               _UxGT("�����ƽ") // "Mesh Leveling"
#define MSG_UBL_3POINT_MESH_LEVELING        _UxGT("�����ƽ") // "3-Point Leveling"
#define MSG_UBL_GRID_MESH_LEVELING          _UxGT("���������ƽ") // "Grid Mesh Leveling"
#define MSG_UBL_MESH_LEVEL                  _UxGT("��ƽ����") // "Level Mesh"
#define MSG_UBL_SIDE_POINTS                 _UxGT("�ߵ�") // "Side Points"
#define MSG_UBL_MAP_TYPE                    _UxGT("ͼ����") // "Map Type"
#define MSG_UBL_OUTPUT_MAP                  _UxGT("�������ͼ") // "Output Mesh Map"
#define MSG_UBL_OUTPUT_MAP_HOST             _UxGT("���������") // "Output for Host"
#define MSG_UBL_OUTPUT_MAP_CSV              _UxGT("�����CSV") // "Output for CSV"
#define MSG_UBL_OUTPUT_MAP_BACKUP           _UxGT("���������") // "Off Printer Backup"
#define MSG_UBL_INFO_UBL                    _UxGT("���UBL��Ϣ") // "Output UBL Info"
#define MSG_UBL_EDIT_MESH_MENU              _UxGT("�༭����") // "Edit Mesh"
#define MSG_UBL_FILLIN_AMOUNT               _UxGT("���ϼ�") // "Fill-in Amount"
#define MSG_UBL_MANUAL_FILLIN               _UxGT("�ֹ����") // "Manual Fill-in"
#define MSG_UBL_SMART_FILLIN                _UxGT("�������") // "Smart Fill-in"
#define MSG_UBL_FILLIN_MESH                 _UxGT("�������") // "Fill-in Mesh"
#define MSG_UBL_INVALIDATE_ALL              _UxGT("�������е�") // "Invalidate All"
#define MSG_UBL_INVALIDATE_CLOSEST          _UxGT("���������") // "Invalidate Closest"
#define MSG_UBL_FINE_TUNE_ALL               _UxGT("ϸ�����е�") // "Fine Tune All"
#define MSG_UBL_FINE_TUNE_CLOSEST           _UxGT("ϸ�������") // "Fine Tune Closest"
#define MSG_UBL_STORAGE_MESH_MENU           _UxGT("����洢") // "Mesh Storage"
#define MSG_UBL_STORAGE_SLOT                _UxGT("�洢��") // "Memory Slot"
#define MSG_UBL_LOAD_MESH                   _UxGT("װ���ȴ�����") // "Load Bed Mesh"
#define MSG_UBL_SAVE_MESH                   _UxGT("�����ȴ�����") // "Save Bed Mesh"
#define MSG_MESH_LOADED                     _UxGT("���� %i ��װ��") // "Mesh %i loaded"
#define MSG_MESH_SAVED                      _UxGT("���� %i �ѱ���") // "Mesh %i saved"
#define MSG_NO_STORAGE                      _UxGT("û�д洢") // "No storage"
#define MSG_UBL_SAVE_ERROR                  _UxGT("����: UBL����") // "Err: UBL Save"
#define MSG_UBL_RESTORE_ERROR               _UxGT("����: UBL��ԭ") // "Err: UBL Restore"
#define MSG_UBL_Z_OFFSET_STOPPED            _UxGT("Zƫ����ֹͣ") // "Z-Offset Stopped"
#define MSG_UBL_STEP_BY_STEP_MENU           _UxGT("һ����UBL") // "Step-By-Step UBL"

#define MSG_LED_CONTROL                     _UxGT("�ƹܿ���") // "LED Control")
#define MSG_LEDS                            _UxGT("��") // "Lights")
#define MSG_LED_PRESETS                     _UxGT("��Ԥ��") // "Light Presets")
#define MSG_SET_LEDS_RED                    _UxGT("��") // "Red")
#define MSG_SET_LEDS_ORANGE                 _UxGT("��") // "Orange")
#define MSG_SET_LEDS_YELLOW                 _UxGT("��") // "Yellow")
#define MSG_SET_LEDS_GREEN                  _UxGT("��") // "Green")
#define MSG_SET_LEDS_BLUE                   _UxGT("��") // "Blue")
#define MSG_SET_LEDS_INDIGO                 _UxGT("��") // "Indigo")
#define MSG_SET_LEDS_VIOLET                 _UxGT("��") // "Violet")
#define MSG_SET_LEDS_WHITE                  _UxGT("��") // "White")
#define MSG_SET_LEDS_DEFAULT                _UxGT("ȱʡ") // "Default")
#define MSG_CUSTOM_LEDS                     _UxGT("���Ƶ�") // "Custom Lights")
#define MSG_INTENSITY_R                     _UxGT("�챥�Ͷ�") // "Red Intensity")
#define MSG_INTENSITY_G                     _UxGT("�̱��Ͷ�") // "Green Intensity")
#define MSG_INTENSITY_B                     _UxGT("�����Ͷ�") // "Blue Intensity")
#define MSG_INTENSITY_W                     _UxGT("�ױ��Ͷ�") // "White Intensity")
#define MSG_LED_BRIGHTNESS                  _UxGT("����") // "Brightness")
#define MSG_MOVING                          _UxGT("�ƶ� ...") // "Moving...")
#define MSG_FREE_XY                         _UxGT("�ͷ� XY") // "Free XY")

#define MSG_MOVE_X                          _UxGT("�ƶ�X")  //"Move X"
#define MSG_MOVE_Y                          _UxGT("�ƶ�Y")  //"Move Y"
#define MSG_MOVE_Z                          _UxGT("�ƶ�Z")  //"Move Z"
#define MSG_MOVE_E                          _UxGT("������")  //"Extruder"
#define MSG_MOVE_01MM                       _UxGT("�ƶ� 0.1 mm")  //"Move 0.1mm"
#define MSG_MOVE_1MM                        _UxGT("�ƶ� 1 mm")  //"Move 1mm"
#define MSG_MOVE_10MM                       _UxGT("�ƶ� 10 mm")  //"Move 10mm"
#define MSG_SPEED                           _UxGT("����")  //"Speed"
#define MSG_BED_Z                           _UxGT("�ȴ�Z")  //"Bed Z"
#define MSG_NOZZLE                          _UxGT(" ") LCD_STR_THERMOMETER _UxGT(" ����")  //"Nozzle" ����
#define MSG_BED                             _UxGT(" ") LCD_STR_THERMOMETER _UxGT(" �ȴ�")  //"Bed"
#define MSG_FAN_SPEED                       _UxGT("��������")  //"Fan speed"
#define MSG_EXTRA_FAN_SPEED                 _UxGT("�����������") // "Extra fan speed"
#define MSG_FLOW                            _UxGT("��������")  //"Flow"
#define MSG_CONTROL                         _UxGT("����")  //"Control"
#define MSG_MIN                             _UxGT(" ") LCD_STR_THERMOMETER _UxGT(" ��С") //" " LCD_STR_THERMOMETER " Min"
#define MSG_MAX                             _UxGT(" ") LCD_STR_THERMOMETER _UxGT(" ���")  //" " LCD_STR_THERMOMETER " Max"
#define MSG_FACTOR                          _UxGT(" ") LCD_STR_THERMOMETER _UxGT(" ����")  //" " LCD_STR_THERMOMETER " Fact"
#define MSG_AUTOTEMP                        _UxGT("�Զ�����")  //"Autotemp"
#define MSG_ON                              _UxGT("�� ")  //"On "
#define MSG_OFF                             _UxGT("�� ")  //"Off"
#define MSG_PID_P                           _UxGT("PID-P")  //"PID-P"
#define MSG_PID_I                           _UxGT("PID-I")  //"PID-I"
#define MSG_PID_D                           _UxGT("PID-D")  //"PID-D"
#define MSG_PID_C                           _UxGT("PID-C")  //"PID-C"
#define MSG_SELECT                          _UxGT("ѡ��")  //"Select"
#define MSG_ACC                             _UxGT("���ٶ�")  //"Accel" acceleration
#define MSG_JERK                            _UxGT("��������")  // "Jerk"
#if IS_KINEMATIC
  #define MSG_VA_JERK                       _UxGT("A�ᶶ������")  //"Va-jerk"
  #define MSG_VB_JERK                       _UxGT("B�ᶶ������")  //"Vb-jerk"
  #define MSG_VC_JERK                       _UxGT("C�ᶶ������")  //"Vc-jerk"
#else
  #define MSG_VA_JERK                       _UxGT("X�ᶶ������")  //"Vx-jerk"
  #define MSG_VB_JERK                       _UxGT("Y�ᶶ������")  //"Vy-jerk"
  #define MSG_VC_JERK                       _UxGT("Z�ᶶ������")  //"Vz-jerk"
#endif
#define MSG_VE_JERK                         _UxGT("��������������")  //"Ve-jerk"
#define MSG_VELOCITY                        _UxGT("�ٶ�")          // "Velocity"
#define MSG_VMAX                            _UxGT("����������")  //"Vmax " max_feedrate_mm_s
#define MSG_VMIN                            _UxGT("��С��������")  //"Vmin"  min_feedrate_mm_s
#define MSG_VTRAV_MIN                       _UxGT("��С�ƶ�����")  //"VTrav min" min_travel_feedrate_mm_s, (target) speed of the move
#define MSG_ACCELERATION                    _UxGT("���ٶ�")       // "Acceleration"
#define MSG_AMAX                            _UxGT("����ӡ���ٶ�")  //"Amax " max_acceleration_mm_per_s2, acceleration in units/s^2 for print moves
#define MSG_A_RETRACT                       _UxGT("�ս����ٶ�")  //"A-retract" retract_acceleration, E acceleration in mm/s^2 for retracts
#define MSG_A_TRAVEL                        _UxGT("�Ǵ�ӡ�ƶ����ٶ�")  //"A-travel" travel_acceleration, X, Y, Z acceleration in mm/s^2 for travel (non printing) moves
#define MSG_STEPS_PER_MM                    _UxGT("�Ჽ��/mm")  //"Steps/mm" axis_steps_per_mm, axis steps-per-unit G92
#if IS_KINEMATIC
  #define MSG_ASTEPS                        _UxGT("A�Ჽ��/mm")  //"Asteps/mm"
  #define MSG_BSTEPS                        _UxGT("B�Ჽ��/mm")  //"Bsteps/mm"
  #define MSG_CSTEPS                        _UxGT("C�Ჽ��/mm")  //"Csteps/mm"
#else
  #define MSG_ASTEPS                        _UxGT("X�Ჽ��/mm")  //"Xsteps/mm"
  #define MSG_BSTEPS                        _UxGT("Y�Ჽ��/mm")  //"Ysteps/mm"
  #define MSG_CSTEPS                        _UxGT("Z�Ჽ��/mm")  //"Zsteps/mm"
#endif
#define MSG_ESTEPS                          _UxGT("����������/mm")  //"Esteps/mm"
#define MSG_E1STEPS                         _UxGT("������1����/mm") //"E1steps/mm"
#define MSG_E2STEPS                         _UxGT("������2����/mm") //"E2steps/mm"
#define MSG_E3STEPS                         _UxGT("������3����/mm") //"E3steps/mm"
#define MSG_E4STEPS                         _UxGT("������4����/mm") //"E4steps/mm"
#define MSG_E5STEPS                         _UxGT("������5����/mm") //"E5steps/mm"
#define MSG_TEMPERATURE                     _UxGT("�¶�")  //"Temperature"
#define MSG_MOTION                          _UxGT("�˶�")  //"Motion"
#define MSG_FILAMENT                        _UxGT("˿�ϲ���")  //"Filament" lcd_control_volumetric_menu
#define MSG_VOLUMETRIC_ENABLED              _UxGT("���ݻ�mm3")  //"E in mm3" volumetric_enabled
#define MSG_FILAMENT_DIAM                   _UxGT("˿��ֱ��")  //"Fil. Dia."
#define MSG_FILAMENT_UNLOAD                 _UxGT("ж�� mm") // "Unload mm"
#define MSG_FILAMENT_LOAD                   _UxGT("װ�� mm")   // "Load mm"
#define MSG_ADVANCE_K                       _UxGT("Advance K") // "Advance K"
#define MSG_CONTRAST                        _UxGT("LCD�Աȶ�")  //"LCD contrast"
#define MSG_STORE_EEPROM                    _UxGT("��������")  //"Store memory"
#define MSG_LOAD_EEPROM                     _UxGT("װ������")  //"Load memory"
#define MSG_RESTORE_FAILSAFE                _UxGT("�ָ���ȫֵ")  //"Restore failsafe"
#define MSG_INIT_EEPROM                     _UxGT("��ʼ������") // "Initialize EEPROM"
#define MSG_REFRESH                         _UxGT("ˢ��")  //"Refresh"
#define MSG_WATCH                           _UxGT("��Ϣ��")  //"Info screen"
#define MSG_PREPARE                         _UxGT("׼��")  //"Prepare"
#define MSG_TUNE                            _UxGT("����")  //"Tune"
#define MSG_PAUSE_PRINT                     _UxGT("��ͣ��ӡ")  //"Pause print"
#define MSG_RESUME_PRINT                    _UxGT("�ָ���ӡ")  //"Resume print"
#define MSG_STOP_PRINT                      _UxGT("ֹͣ��ӡ")  //"Stop print"
#define MSG_CARD_MENU                       _UxGT("�Ӵ洢���ϴ�ӡ")  //"Print from SD"
#define MSG_NO_CARD                         _UxGT("�޴洢��")  //"No SD card"
#define MSG_DWELL                           _UxGT("������ ...")  //"Sleep..."
#define MSG_USERWAIT                        _UxGT("������� ...")  //"Click to resume..."
#define MSG_PRINT_PAUSED                    _UxGT("��ͣ��ӡ") // "Print paused"
#define MSG_PRINT_ABORTED                   _UxGT("��ȡ����ӡ")  //"Print aborted"
#define MSG_NO_MOVE                         _UxGT("���ƶ�")  //"No move."
#define MSG_KILLED                          _UxGT("��ɱ��")  //"KILLED. "
#define MSG_STOPPED                         _UxGT("��ֹͣ")  //"STOPPED. "
#define MSG_CONTROL_RETRACT                 _UxGT("�س鳤��mm")  //"Retract mm" retract_length, retract length (positive mm)
#define MSG_CONTROL_RETRACT_SWAP            _UxGT("���ֻس鳤��mm")  //"Swap Re.mm" swap_retract_length, swap retract length (positive mm), for extruder change
#define MSG_CONTROL_RETRACTF                _UxGT("�س�����mm/s")  //"Retract  V" retract_feedrate_mm_s, feedrate for retracting (mm/s)
#define MSG_CONTROL_RETRACT_ZLIFT           _UxGT("Hop mm")  //"Hop mm" retract_zlift, retract Z-lift
#define MSG_CONTROL_RETRACT_RECOVER         _UxGT("�س�ָ�����mm")  //"UnRet +mm" retract_recover_length, additional recover length (mm, added to retract length when recovering)
#define MSG_CONTROL_RETRACT_RECOVER_SWAP    _UxGT("���ֻس�ָ�����mm")  //"S UnRet+mm" swap_retract_recover_length, additional swap recover length (mm, added to retract length when recovering from extruder change)
#define MSG_CONTROL_RETRACT_RECOVERF        _UxGT("�س�ָ����������mm/s")  //"UnRet  V" retract_recover_feedrate_mm_s, feedrate for recovering from retraction (mm/s)
#define MSG_CONTROL_RETRACT_RECOVER_SWAPF   _UxGT("S UnRet V") // "S UnRet V"
#define MSG_AUTORETRACT                     _UxGT("�Զ����")  //"AutoRetr." autoretract_enabled,
#define MSG_FILAMENTCHANGE                  _UxGT("����˿��")  //"Change filament"
#define MSG_FILAMENTLOAD                    _UxGT("װ��˿��") // "Load filament"
#define MSG_FILAMENTUNLOAD                  _UxGT("ж��˿��") // "Unload filament"
#define MSG_FILAMENTUNLOAD_ALL              _UxGT("ж��ȫ��") // "Unload All"
#define MSG_INIT_SDCARD                     _UxGT("��ʼ���洢��")  //"Init. SD card"
#define MSG_CNG_SDCARD                      _UxGT("�����洢��")  //"Change SD card"
#define MSG_ZPROBE_OUT                      _UxGT("Z̽�����ȴ�֮��")  //"Z probe out. bed" Z probe is not within the physical limits
#define MSG_SKEW_FACTOR                     _UxGT("ƫб����") // "Skew Factor"
#define MSG_BLTOUCH                         _UxGT("BLTouch")     // "BLTouch"
#define MSG_BLTOUCH_SELFTEST                _UxGT("BLTouch �Լ�") // "BLTouch Self-Test"
#define MSG_BLTOUCH_RESET                   _UxGT("����BLTouch")  // "Reset BLTouch"
#define MSG_BLTOUCH_DEPLOY                  _UxGT("����BLTouch") // "Deploy BLTouch"
#define MSG_BLTOUCH_STOW                    _UxGT("װ��BLTouch")   // "Stow BLTouch"
#define MSG_HOME                            _UxGT("��λ")  //"Home"  // Used as MSG_HOME " " MSG_X MSG_Y MSG_Z " " MSG_FIRST
#define MSG_FIRST                           _UxGT("��")  //"first"
#define MSG_ZPROBE_ZOFFSET                  _UxGT("Zƫ��")  //"Z Offset"
#define MSG_BABYSTEP_X                      _UxGT("΢������X��")  //"Babystep X" lcd_babystep_x, Babystepping enables the user to control the axis in tiny amounts
#define MSG_BABYSTEP_Y                      _UxGT("΢������Y��")  //"Babystep Y"
#define MSG_BABYSTEP_Z                      _UxGT("΢������Z��")  //"Babystep Z"
#define MSG_ENDSTOP_ABORT                   _UxGT("������ֹ")  //"Endstop abort"
#define MSG_HEATING_FAILED_LCD              _UxGT("����ʧ��")  //"Heating failed"
#define MSG_ERR_REDUNDANT_TEMP              _UxGT("����REDUNDANT TEMP")  //"Err: REDUNDANT TEMP"
#define MSG_THERMAL_RUNAWAY                 _UxGT("�¿�ʧ��")  //"THERMAL RUNAWAY"
#define MSG_ERR_MAXTEMP                     _UxGT("��������¶�")  //"Err: MAXTEMP"
#define MSG_ERR_MINTEMP                     _UxGT("��������¶�")  //"Err: MINTEMP"
#define MSG_ERR_MAXTEMP_BED                 _UxGT("��������ȴ��¶�")  //"Err: MAXTEMP BED"
#define MSG_ERR_MINTEMP_BED                 _UxGT("��������ȴ��¶�")  //"Err: MINTEMP BED"
#define MSG_ERR_Z_HOMING                    MSG_HOME _UxGT(" ") MSG_X MSG_Y _UxGT(" ") MSG_FIRST
#define MSG_HALTED                          _UxGT("��ӡͣ��")  //"PRINTER HALTED"
#define MSG_PLEASE_RESET                    _UxGT("������")  //"Please reset"
#define MSG_SHORT_DAY                       _UxGT("��")  //"d" // One character only
#define MSG_SHORT_HOUR                      _UxGT("ʱ")  //"h" // One character only
#define MSG_SHORT_MINUTE                    _UxGT("��")  //"m" // One character only
#define MSG_HEATING                         _UxGT("������ ...")  //"Heating..."
#define MSG_BED_HEATING                     _UxGT("�����ȴ���...")  //"Bed Heating..."
#define MSG_DELTA_CALIBRATE                 _UxGT("�SУ׼")  //"Delta Calibration"
#define MSG_DELTA_CALIBRATE_X               _UxGT("�SУ׼X")  //"Calibrate X"
#define MSG_DELTA_CALIBRATE_Y               _UxGT("�SУ׼Y")  //"Calibrate Y"
#define MSG_DELTA_CALIBRATE_Z               _UxGT("�SУ׼Z")  //"Calibrate Z"
#define MSG_DELTA_CALIBRATE_CENTER          _UxGT("�SУ׼����")  //"Calibrate Center"
#define MSG_DELTA_SETTINGS                  _UxGT("�S����") // "Delta Settings"
#define MSG_DELTA_AUTO_CALIBRATE            _UxGT("�S�Զ�У׼") // "Auto Calibration"
#define MSG_DELTA_HEIGHT_CALIBRATE          _UxGT("���èS�߶�") // "Set Delta Height"
#define MSG_DELTA_DIAG_ROD                  _UxGT("�Sб��") // "Diag Rod"
#define MSG_DELTA_HEIGHT                    _UxGT("�S�߶�") // "Height"
#define MSG_DELTA_RADIUS                    _UxGT("�S�뾶") // "Radius"
#define MSG_INFO_MENU                       _UxGT("���ڴ�ӡ��")  //"About Printer"
#define MSG_INFO_PRINTER_MENU               _UxGT("��ӡ����Ϣ")  //"Printer Info"
#define MSG_3POINT_LEVELING                 _UxGT("�����ƽ") // "3-Point Leveling"
#define MSG_LINEAR_LEVELING                 _UxGT("���Ե�ƽ") // "Linear Leveling"
#define MSG_BILINEAR_LEVELING               _UxGT("˫���Ե�ƽ") // "Bilinear Leveling"
#define MSG_UBL_LEVELING                    _UxGT("ͳһ�ȴ���ƽ(UBL)") // "Unified Bed Leveling"
#define MSG_MESH_LEVELING                   _UxGT("�����ƽ") // "Mesh Leveling"
#define MSG_INFO_STATS_MENU                 _UxGT("��ӡ��ͳ��")  //"Printer Stats"
#define MSG_INFO_BOARD_MENU                 _UxGT("������Ϣ")  //"Board Info"
#define MSG_INFO_THERMISTOR_MENU            _UxGT("�¶ȼ�")  //"Thermistors"
#define MSG_INFO_EXTRUDERS                  _UxGT("������")  //"Extruders"
#define MSG_INFO_BAUDRATE                   _UxGT("������")  //"Baud"
#define MSG_INFO_PROTOCOL                   _UxGT("Э��")  //"Protocol"
#define MSG_CASE_LIGHT                      _UxGT("��ǵ�") // "Case light"
#define MSG_CASE_LIGHT_BRIGHTNESS           _UxGT("������") // "Light BRIGHTNESS"

#if LCD_WIDTH > 19
#define MSG_INFO_PRINT_COUNT              _UxGT("��ӡ����")  //"Print Count"
#define MSG_INFO_COMPLETED_PRINTS         _UxGT("�����")  //"Completed"
#define MSG_INFO_PRINT_TIME               _UxGT("�ܴ�ӡʱ��")  //"Total print time"
#define MSG_INFO_PRINT_LONGEST            _UxGT("�����ʱ��")  //"Longest job time"
#define MSG_INFO_PRINT_FILAMENT           _UxGT("�ܼƼ���")  //"Extruded total"
#else
#define MSG_INFO_PRINT_COUNT              _UxGT("��ӡ��")  //"Prints"
#define MSG_INFO_COMPLETED_PRINTS         _UxGT("���")  //"Completed"
#define MSG_INFO_PRINT_TIME               _UxGT("�ܹ�")  //"Total"
#define MSG_INFO_PRINT_LONGEST            _UxGT("�")  //"Longest"
#define MSG_INFO_PRINT_FILAMENT           _UxGT("�Ѽ���")  //"Extruded"
#endif

#define MSG_INFO_MIN_TEMP                   _UxGT("����¶�")  //"Min Temp"
#define MSG_INFO_MAX_TEMP                   _UxGT("����¶�")  //"Max Temp"
#define MSG_INFO_PSU                        _UxGT("��Դ��Ӧ")  //"Power Supply"
#define MSG_DRIVE_STRENGTH                  _UxGT("��������") // "Drive Strength"
#define MSG_DAC_PERCENT                     _UxGT("���� %") // "Driver %"
#define MSG_DAC_EEPROM_WRITE                _UxGT("������������") // "DAC EEPROM Write"
#define MSG_FILAMENT_CHANGE_HEADER_PAUSE    _UxGT("��ӡ����ͣ") // "PRINT PAUSED"
#define MSG_FILAMENT_CHANGE_HEADER_LOAD     _UxGT("װ��˿��") // "LOAD FILAMENT"
#define MSG_FILAMENT_CHANGE_HEADER_UNLOAD   _UxGT("ж��˿��") // "UNLOAD FILAMENT"
#define MSG_FILAMENT_CHANGE_OPTION_HEADER   _UxGT("�ָ�ѡ��:") // "RESUME OPTIONS:"
#define MSG_FILAMENT_CHANGE_OPTION_PURGE    _UxGT("�������") // "Purge more"
#define MSG_FILAMENT_CHANGE_OPTION_RESUME   _UxGT("�ָ���ӡ")  //"Resume print"
#define MSG_FILAMENT_CHANGE_NOZZLE          _UxGT("  ����: ") // "  Nozzle: "
#define MSG_ERR_HOMING_FAILED               _UxGT("��ԭλʧ��") // "Homing failed"
#define MSG_ERR_PROBING_FAILED              _UxGT("̽��̽��ʧ��") // "Probing failed"
#define MSG_M600_TOO_COLD                   _UxGT("M600: ̫��") // "M600: Too cold"

#if LCD_HEIGHT >= 4
#define MSG_FILAMENT_CHANGE_INIT_1          _UxGT("�ȴ���ʼ")  //"Wait for start"
#define MSG_FILAMENT_CHANGE_INIT_2          _UxGT("˿��")  //"of the filament"
#define MSG_FILAMENT_CHANGE_INIT_3          _UxGT("���")  //"change"
#define MSG_FILAMENT_CHANGE_UNLOAD_1        _UxGT("�ȴ�")  //"Wait for"
#define MSG_FILAMENT_CHANGE_UNLOAD_2        _UxGT("ж��˿��")  //"filament unload"
#define MSG_FILAMENT_CHANGE_INSERT_1        _UxGT("����˿��")  //"Insert filament"
#define MSG_FILAMENT_CHANGE_INSERT_2        _UxGT("������")  //"and press button"
#define MSG_FILAMENT_CHANGE_INSERT_3        _UxGT("������ ...")  //"to continue..."
#define MSG_FILAMENT_CHANGE_HEAT_1          _UxGT("���°�ť��") // "Press button to"
#define MSG_FILAMENT_CHANGE_HEAT_2          _UxGT("��������.") // "heat nozzle."
#define MSG_FILAMENT_CHANGE_HEATING_1       _UxGT("��������") // "Heating nozzle"
#define MSG_FILAMENT_CHANGE_HEATING_2       _UxGT("��ȴ� ...") // "Please wait..."
#define MSG_FILAMENT_CHANGE_LOAD_1          _UxGT("�ȴ�")  //"Wait for"
#define MSG_FILAMENT_CHANGE_LOAD_2          _UxGT("����")  //"filament load"
#define MSG_FILAMENT_CHANGE_PURGE_1         _UxGT("�ȴ�") // "Wait for"
#define MSG_FILAMENT_CHANGE_PURGE_2         _UxGT("˿�����") // "filament purge"
#define MSG_FILAMENT_CHANGE_RESUME_1        _UxGT("�ȴ���ӡ")  //"Wait for print"
#define MSG_FILAMENT_CHANGE_RESUME_2        _UxGT("�ָ�")  //"to resume"

#else // LCD_HEIGHT < 4
#define MSG_FILAMENT_CHANGE_INIT_1          _UxGT("��ȴ� ...")  //"Please wait..."
#define MSG_FILAMENT_CHANGE_UNLOAD_1        _UxGT("�˳��� ...")  //"Ejecting..."
#define MSG_FILAMENT_CHANGE_INSERT_1        _UxGT("���벢����")  //"Insert and Click"
#define MSG_FILAMENT_CHANGE_HEATING_1       _UxGT("������ ...") // "Heating..."
#define MSG_FILAMENT_CHANGE_LOAD_1          _UxGT("װ���� ...")  //"Loading..."
#define MSG_FILAMENT_CHANGE_PURGE_1         _UxGT("����� ...") // "Purging..."
#define MSG_FILAMENT_CHANGE_RESUME_1        _UxGT("�ָ��� ...")  //"Resuming..."
#endif // LCD_HEIGHT < 4

#endif // LANGUAGE_ZH_CN_H
