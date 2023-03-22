# Solution
EffectiveWeight(Attribute.value, Attribute.Type, AttributeRate.rate)
- int value, rate
- bool type

AttributeRate(Attribute.min, Attribute.max)
- int min, max
- int poor, excellent // calculated area

NormalizedWeight(Attribute.rank, const std::vector<int> &ranks)
- int rank, const std::vector<int> *ranks

Attribute
- int min, max, rank
- bool type
- static std::vector<int> ranks;
- float value
- float nWeight = NormalizedWeight(rank)
- float *rate = AttributeRate(min, max) // 0 min, 1 max
- float effectiveWeight = EffectiveWeight(value, type, rate)

Alternative
- std::string alternativeName;
- Attribute *attribute;
- Alternative(std::string name, Attribute *attr)

SmartMethod
- Attribute *attribute = new Attribute[x](min,max,rank,type); // x = number of attributes
- Alternative *alternative = new Alternative[x];