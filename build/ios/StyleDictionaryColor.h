
//
// StyleDictionaryColor.h
//

// Do not edit directly
// Generated on Fri, 16 Dec 2022 17:02:53 GMT


#import <UIKit/UIKit.h>

typedef NS_ENUM(NSInteger, StyleDictionaryColorName) {
ColorPrimaryColorsGreenBackground,
ColorPrimaryColorsGreenAccent,
ColorPrimaryColorsGreen,
ColorPrimaryColorsGreenDark,
ColorSecondaryColorsBlueBackground,
ColorSecondaryColorsBlueAccent,
ColorSecondaryColorsBlue,
ColorSecondaryColorsBlueDark,
ColorSecondaryColorsBlueDarkBackground,
ColorSecondaryColorsBlueTextLink,
ColorTertiaryColorsTealBackground,
ColorTertiaryColorsTealAccent,
ColorTertiaryColorsTeal,
ColorTertiaryColorsTealDark,
ColorTertiaryColorsEggplantBackground,
ColorTertiaryColorsEggplantAccent,
ColorTertiaryColorsEggplantDark,
ColorUtilityColorsRedBackground,
ColorUtilityColorsRed,
ColorUtilityColorsRedDark,
ColorUtilityColorsRedPin,
ColorUtilityColorsYellowBackground,
ColorUtilityColorsYellow,
ColorNeutralColorsGrayBackground,
ColorNeutralColorsGrayLight,
ColorNeutralColorsGrayDisabled,
ColorNeutralColorsGray,
ColorNeutralColorsGrayDark,
ColorNeutralColorsBlack,
ColorNeutralColorsWhite,
ColorBetaSecondaryColorsBlueExtraDarkTextBeta,
ColorBetaSecondaryColorsDeprecatedBlueDarkTextLinkBeta
};

@interface StyleDictionaryColor : NSObject
+ (NSArray *)values;
+ (UIColor *)color:(StyleDictionaryColorName)color;
@end
