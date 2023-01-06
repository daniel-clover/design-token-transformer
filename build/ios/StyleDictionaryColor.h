
//
// StyleDictionaryColor.h
//

// Do not edit directly
// Generated on Fri, 06 Jan 2023 17:38:07 GMT


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
