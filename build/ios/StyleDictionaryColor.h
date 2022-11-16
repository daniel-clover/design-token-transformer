
//
// StyleDictionaryColor.h
//

// Do not edit directly
// Generated on Wed, 16 Nov 2022 20:47:02 GMT


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
