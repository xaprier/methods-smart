# Socials

<p align="center">
  <a href="https://discord.com/users/xaprier#6129" target="_blank" rel="noreferrer">
    <img src="https://raw.githubusercontent.com/danielcranney/readme-generator/main/public/icons/socials/discord.svg" width="32" height="32" />
  </a>&nbsp
  <a href="https://www.github.com/xaprier" target="_blank" rel="noreferrer">
    <img src="https://raw.githubusercontent.com/danielcranney/readme-generator/main/public/icons/socials/github.svg" width="32" height="32" />
  </a>&nbsp
  <a href="http://www.instagram.com/xaprier.dev" target="_blank" rel="noreferrer">
    <img src="https://raw.githubusercontent.com/danielcranney/readme-generator/main/public/icons/socials/instagram.svg" width="32" height="32" />
  </a>&nbsp
  <a href="https://www.linkedin.com/in/xaprier/" target="_blank" rel="noreferrer">
    <img src="https://raw.githubusercontent.com/danielcranney/readme-generator/main/public/icons/socials/linkedin.svg" width="32" height="32" />
  </a>&nbsp
  <a href="https://twitter.com/xaprier_dev" target="_blank" rel="noreferrer">
    <img src="https://raw.githubusercontent.com/danielcranney/readme-generator/main/public/icons/socials/twitter.svg" width="32" height="32" />
  </a>
</p>

# methods-smart
SMART Method C++ Code With Object-Oriented Principles
  
# SMART Method
## 1. Introduction

<html lang="en_US">
    <p>
        The Simple Multi-Attribute Rating Technique (SMART) was introduced by  
        Winterfeldt and Edwards in 1986 [1, 2], in which a limited number of alternatives  
        are examined based on a limited number of attributes. The present method aimed to  
        rank the alternatives by a combination of quantitative and qualitative attributes.  
        This is a convenient technique because of its ease of use, which is used in many  
        cases such as evaluation of nuclear waste disposal sites [3] and ERP system  
        selection [4]. The SMART method has the following features:   
    </p>
    <ul>
        <li>It is regarded as one of the compensatory methods;</li>
        <li>It is possible to use independent and dependent attributes;</li>
        <li>The qualitative attributes should be converted into the quantitative attributes.</li>
    </ul>
    <p>
        Initially, the matrix of alternatives and attributes is formed based on the information received from the decision maker, which is as shown in Eq.(<a href="#1.1">1.1</a>).
    </p>
    <table align="center" border="true" id="1.1">
        <p align="center">(1.1)X<sub>(m,n)</sub>; i = 1,...,m; j = 1,...,n</p>
        <tr>
            <td><i>r</i><sub>11</sub></td>
            <td>...</td>
            <td><i>r</i><sub>1j</sub></td>
            <td>...</td>
            <td><i>r</i><sub>1n</sub></td>
        </tr>
        <tr>
            <td>...</td>
            <td>...</td>
            <td>...</td>
            <td>...</td>
            <td>...</td>
        </tr>
        <tr>
            <td><i>r</i><sub>i1</sub></td>
            <td>...</td>
            <td><i>r</i><sub>ij</sub></td>
            <td>...</td>
            <td><i>r</i><sub>in</sub></td>
        </tr>
        <tr>
            <td>...</td>
            <td>...</td>
            <td>...</td>
            <td>...</td>
            <td>...</td>
        </tr>
        <tr>
            <td><i>r</i><sub>m1</sub></td>
            <td>...</td>
            <td><i>r</i><sub>mj</sub></td>
            <td>...</td>
            <td><i>r</i><sub>mn</sub></td>
        </tr>
    </table><br>
    <p>
        According to the matrix of Eq. (<a href="#1.1">1.1</a>), 
        <i>r</i><sub>ij</sub> is the element of decision matrix for i<sub>th</sub>
        alternative in j<sub>th</sub> attribute. 
        In this technique, the qualitative attributes are ranked as
        shown in <a href=#table11>Table 1.1</a>.
    </p>
    <table border="true" align="center" id="table11">
        <p align="center">Table 1.1 Seven ranking of qualitative attributes</p>
        <tr>
            <td>Poor</td><td>Fairly Weak</td><td>Medium</td><td>Fairly Good</td><td>Good</td><td>Very Good</td><td>Excellent</td>
        </tr>
        <tr>
            <td>4</td><td>5</td><td>6</td><td>7</td><td>8</td><td>9</td><td>10</td>
        </tr>
    </table>
</html>

## 2. Description of SMART Method

### 2.1 Rating the Attributes
<html>
    <p>
        In the first step, the minimum <b><i>P<sub>min</sub></i></b> and 
        maximum value <b><i>P<sub>max</sub></i></b> are defined for all attributes 
        by decision maker.
    </p>
    <p>
        Therefore, the decision maker obviously chooses in the interval 
        of (<b><i>P<sub>min</sub></i></b>; <b><i>P<sub>max</sub></i></b>).
        The entire decision-making interval is divided into sub-intervals 
        with equal lengths from Eq. (<a href="#e1.2">1.2</a>).
        <p align="center" id="e1.2">
            (1.2)&nbsp;<b><i>P<sub>min</sub>; P<sub>min</sub> + e<sub>0</sub>; P<sub>min</sub> + e<sub>1</sub>; ... </i></b>
        </p>
    </p>
    <p>
        Eq. (<a href="#e1.3">1.3</a>) is used to calculate e.
        <p align="center" id="e1.3">
        (1.3)&nbsp;<b><i>e<sub>v</sub> - e<sub>v-1</sub> = &#946;e<sub>v-1</sub></i></b>
        </p>
    </p>
    <p>
        The geometric progression is created, and Eq. (<a href="#e1.4">1.4</a>) is obtained.
        <p align="center" id="e1.4">
        (1.4)&nbsp;<b><i>e<sub>v</sub> = (1 + &#946;)e<sub>v-1</sub> = (1 + &#946;)<sup>2</sup>e<sub>v-2</sub> = (1 + &#946;)<sup>v</sup>e<sub>0</sub></i></b>
        </p>
    </p>
    <p>
        Finally, Eq. (<a href="#e1.5">1.5</a>) can be deduced
        <p align="center" id="e1.5">
            (1.5)&nbsp;<b><i>P<sub>max</sub> = e<sub>v</sub> + P<sub>min</sub></i></b>
        </p>
    </p>
</html>

### 2.2 The Effective Weights of Alternatives
<p>
    g<sub>ij</sub> is the effective weight of alternatives and it is obtained from judgment of the decision maker about the alternative A<sub>i</sub> against the attribute C<sub>j</sub>. 
    Initially, the qualitative attributes are ranked based on the attribute situation expressed by the decision maker according to <a href="#table11">Table 1.1</a>. 
    Also, the Eq. (<a href="e1.6">1.6</a>) is used for the quantitative attributes (P<sub>v</sub> indicates the value of alternative in the studied attribute)
    <p align="center" id="e1.6">
        (1.6)&nbsp;<b><i>v = log<sub>2</sub><sup>(P<sub>v</sub> - P<sub>min</sub>) / (P<sub>max</sub> - P<sub>min</sub>) * 64</sup></i></b>
    </p>
    <p>
        According to Eq. (<a href="#e1.6">1.6</a>), g<sub>ij</sub> is obtained for positive attributes (the higher amount of attribute is better like speed), when the value of v is summed with the number 4 to match the quantitative and qualitative attributes in <a href="#table11">Table 1.1</a>. 
        On the other hand, g<sub>ij</sub> is obtained for negative attributes (the lower amount of attribute is better like price), when the value of v is subtracted from 10 to match the quantitative and qualitative attributes in <a href="#table11">Table 1.1</a>.
    </p>
</p>

### 2.3 The Normalized Weights
<p>
    Initially, the decision maker is asked to rank the attributes according to his priority and <a href="#table11">Table 1.1</a> from 4 to 10. The following definitions are considered to formulate the model:<br>
    <ul>
        <li><b><i>A<sub>i</sub></i></b> Alternatives, i = 1,...,m (m represents the number of alternatives);</li>
        <li><b><i>C<sub>j</sub></i></b> Attributes, j = 1,...,n (n denotes the number of attributes);</li>
        <li><b><i>h<sub>j</sub></i></b> The rank allocated to the attribute <b><i>C<sub>j</sub></i></b> by the decision maker j = 1,...,n;</li>
        <li><b><i>w<sub>j</sub></i></b> The denormalized weight obtained from Eq. (<a href="#e1.7">1.7</a>)</li>
    </ul>
    <p align="center" id="e1.7">
        (1.7)&nbsp;<b><i>w<sub>j</sub> = (&radic;2)<sup>h<sub>j</sub></sup> ; j = 1,...,n;</i></b>
    </p>
    Now, the value of each attribute is calculated after normalization as shown in Eq. (<a href="#e1.8">1.8</a>)
    <p>
        <p align="center" id="e1.8">
            (1.8)&nbsp;<b><i>w<sub>j</sub> = (&radic;2)<sup>h<sub>j</sub></sup> / &sum;<sup>n</sup><sub>j=1</sub> (&radic;2)<sup>h<sub>j</sub></sup></i></b>
        </p>
    </p>
</p>

### 2.4 The Final Ranking of Alternatives
<p>
    According to Eq. (<a href="#e1.6">1.6</a>), <b><i>f<sub>i</sub></i></b> is the final weight, which is introduced as shown in Eq. (<a href="#e1.9">1.9</a>).
    <p align="center" id="e1.9">
        (1.9)&nbsp;<b><i>f<sub>i</sub> = &sum;<sup>n</sup><sub>j=1</sub> w<sub>j</sub> . g<sub>ij</sub> ; i = 1,...,m</i></b>
    </p>
    The alternative with the highest <b><i>f<sub>i</sub></i></b> amount is the best alternative, and others are also ranked.
</p>