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
  
## SMART Method
### 1. Introduction

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
        <caption>
        (1.1)X<sub>(m,n)</sub>;  
        i = 1,...,m; j = 1,...,n   
        </caption>
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
        <caption>Table 1.1 Seven ranking of qualitative attributes</caption>
        <tr>
            <td>Poor</td><td>Fairly Weak</td><td>Medium</td><td>Fairly Good</td><td>Good</td><td>Very Good</td><td>Excellent</td>
        </tr>
        <tr>
            <td>4</td><td>5</td><td>6</td><td>7</td><td>8</td><td>9</td><td>10</td>
        </tr>
    </table>
</html>

### 2. Description of SMART Method

#### 2.1 Rating the Attributes
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