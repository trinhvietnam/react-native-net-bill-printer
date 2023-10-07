

#import <React/RCTBridgeModule.h>
#import <React/RCTEventEmitter.h>

@interface RNNetPrinterBill : RCTEventEmitter <RCTBridgeModule>{
    NSString *connected_ip;
    NSString *current_scan_ip;
    NSMutableArray* _printerArray;
    bool is_scanning;
}

@end

