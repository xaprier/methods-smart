# Solution
EffectiveWeight(Attribute.value, Attribute.Type, AttributeRate.rate)
- int value, rate
- bool type

AttributeRate(Attribute.min, Attribute.max)
- int min, max
- int poor, excellent // calculated area

NormalizedWeight(Attribute.rank)
- int rank

Attribute
- int value, min, max, rank
- bool type
- int nWeight = NormalizedWeight(rank)
- int *rate = AttributeRate(min, max) // 0 min, 1 max
- int effectiveWeight = EffectiveWeight(value, type, rate)

Alternative
- std::string alternativeName;
- int finalRank = Attribute

SmartMethod
- Alternative *alternative = new Alternative[x];
