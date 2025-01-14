const StyleDictionary = require('style-dictionary')
const baseConfig = require('./config.json')

StyleDictionary.registerTransform({
  name: 'size/px',
  type: 'value',
  matcher: token => {
    return (token.unit === 'pixel' || token.type === 'dimension') && token.value !== 0
  },
  transformer: token => {
    return `${token.value}px`
  }
})

StyleDictionary.registerTransform({
  name: 'size/percent',
  type: 'value',
  matcher: token => {
    return token.unit === 'percent' && token.value !== 0
  },
  transformer: token => {
    return `${token.value}%`
  }
})

StyleDictionary.registerTransformGroup({
  name: 'custom/css',
  transforms: StyleDictionary.transformGroup['css'].concat([
    'size/px',
    'size/percent', 
    'size/rem'
  ])
})

StyleDictionary.registerTransformGroup({
  name: 'custom/less',
  transforms: StyleDictionary.transformGroup['less'].concat([
    'size/px',
    'size/percent'
  ])
})

StyleDictionary.registerTransformGroup({
  name: 'custom/scss',
  transforms: StyleDictionary.transformGroup['less'].concat([
    'size/px',
    'size/percent'
  ])
})

StyleDictionary.registerFilter({
  name: 'validToken',
  matcher: function(token) {
    return ['dimension', 'string', 'number', 'color'].includes(token.type)
  }
})

StyleDictionary.registerFilter({
  name: 'isColor',
  matcher: function(token) {
    return token.attributes.category === 'color';
  }
})

StyleDictionary.registerFilter({
  name: 'isTypography',
  matcher: function(token) {
    return token.attributes.category === 'typography';
  }
})

StyleDictionary.registerFilter({
  name: 'isThreePointZero',
  matcher: function(token) {
    return token.attributes.type === 'clover 3.0';
  }
})

StyleDictionary.registerFilter({
  name: 'isTwoPointZero',
  matcher: function(token) {
    return token.attributes.type === 'clover 2.0';
  }
})

const StyleDictionaryExtended = StyleDictionary.extend(baseConfig)

StyleDictionaryExtended.buildAllPlatforms()