#import <Foundation/Foundation.h>

#define PBPREFERENCEPANE_BUILD_SHOWWINDOW_ALWAYS	0
#define PBPREFERENCEPANE_BUILD_SHOWWINDOW_NEVER		1
#define PBPREFERENCEPANE_BUILD_SHOWWINDOW_ONERRORS	2

#define PBPREFERENCEPANE_BUILD_HIDEWINDOW_NEVER		0
#define PBPREFERENCEPANE_BUILD_HIDEWINDOW_ALWAYS	1
#define PBPREFERENCEPANE_BUILD_HIDEWINDOW_ONSUCCESS	2

#define PBPREFERENCEPANE_BUILD_UNSAVEDPROJECT_ASKBEFOREBUILD	0
#define PBPREFERENCEPANE_BUILD_UNSAVEDPROJECT_ALWAYSSAVE	1
#define PBPREFERENCEPANE_BUILD_UNSAVEDPROJECT_NEVERSAVE		2

extern NSString * const PBPREFERENCEPANE_BUILD_NOTIFICATION_DEFAULTS_DIDCHANGE;

extern NSString * const PBPREFERENCEPANE_BUILD_SCRATCH_LOCATION;

extern NSString * const PBPREFERENCEPANE_BUILD_SHOW_WINDOW;
extern NSString * const PBPREFERENCEPANE_BUILD_HIDE_WINDOW;
extern NSString * const PBPREFERENCEPANE_BUILD_UNSAVED_PROJECT;