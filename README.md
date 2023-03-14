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

## 3.1 Case Study
<p>
    A manufacturer, aiming to produce a car from three different car models (<b>A<sub>1</sub>, A<sub>2</sub> and A<sub>3</sub></b>), expresses the selection interval for the attributes of price (<b>C<sub>1</sub></b>), maximum speed (<b>C<sub>2</sub></b>), acceleration between 0 and 100 (<b>C<sub>3</sub></b>), and the trunk volume of car (<b>C<sub>4</sub></b>) as follows:
    <ul>
        <li><b>Consumer price:</b> 20,000$–40,000$</li>
        <li><b>Maximum speed:</b> 140–220 km/h</li>
        <li><b>Acceleration 0–100:</b> 8–20 s</li>
        <li><b>Trunk volume of car:</b> 200–2000 dm<sup>3</sup></li>
    </ul>
    Further, the attributes are ranked as shown in <a href="#table12">Table 1.2</a>. The attributes are represented by experts, and the decision matrix is as the matrix of <a href="#fig11">Fig. 1.1</a>. It is desirable to select the best alternative according to the ranking of attributes by the manufacturer by the SMART method.
</p>

<p>
    <h2>&#9752; Solution</h3>
    <h3>(A) <b>Rating the attributes</b></h3>
    The rating of attributes is as shown in <a href="#stable13">Table 1.3</a>.
    <p>
        <table align="center" id="stable12" border="true">
            <p align="center"><b>(Table 1.2)</b> Ranking the attributes</p>
            <tr>
                <td>Attribute</td>
                <td>C<sub>1</sub></td>
                <td>C<sub>2</sub></td>
                <td>C<sub>3</sub></td>
                <td>C<sub>4</sub></td>
            </tr>
            <tr>
                <td>Rank</td>
                <td>9</td>
                <td>5</td>
                <td>7</td>
                <td>6</td>
            </tr>
        </table>
    </p>
    <p>
        <table align="center" id="sfig11" border="true">
            <p align="center"><b>(Fig 1.1)</b> Decision matrix of car production</p>
            <tr>
                <td></td>
                <td>-</td>
                <td>+</td>
                <td>-</td>
                <td>+</td>
                <td>Attribute Type</td>
            </tr>
            <tr>
                <td></td>
                <td>C<sub>1</sub></td>
                <td>C<sub>2</sub></td>
                <td>C<sub>3</sub></td>
                <td>C<sub>4</sub></td>
                <td>Attribute</td>
            </tr>
            <tr>
                <td>A<sub>1</sub></td>
                <td>25000</td>
                <td>153</td>
                <td>15.300</td>
                <td>250</td>
            </tr>
            <tr>
                <td>A<sub>2</sub></td>
                <td>33000</td>
                <td>177</td>
                <td>12.300</td>
                <td>380</td>
            </tr>
            <tr>
                <td>A<sub>3</sub></td>
                <td>40000</td>
                <td>199</td>
                <td>11.100</td>
                <td>480</td>
            </tr>
        </table>
    </p>
    <p>
        <table align="center" id="stable13" border="true">
            <p align="center"><b>(Table 1.3)</b> Rating the attributes</p>
            <tr>
                <td>Rank</td>
                <td>Performance</td>
                <td>C<sub>1</sub></td>
                <td>C<sub>2</sub></td>
                <td>C<sub>3</sub></td>
                <td>C<sub>4</sub></td>
            </tr>
            <tr>
                <td>10</td>
                <td>Excellent</td>
                <td>20,312.500</td>
                <td>220</td>
                <td>8.188</td>
                <td>2000</td>
            </tr>
            <tr>
                <td>9</td>
                <td></td>
                <td>20,625</td>
                <td>180</td>
                <td>8.375</td>
                <td>1100</td>
            </tr>
            <tr>
                <td>8</td>
                <td>Good</td>
                <td>21,250</td>
                <td>160</td>
                <td>8.750</td>
                <td>650</td>
            </tr>
            <tr>
                <td>7</td>
                <td></td>
                <td>22,500</td>
                <td>150</td>
                <td>9.500</td>
                <td>425</td>
            </tr>
            <tr>
                <td>6</td>
                <td>Medium</td>
                <td>25,000</td>
                <td>145</td>
                <td>11</td>
                <td>312.500</td>
            </tr>
            <tr>
                <td>5</td>
                <td></td>
                <td>30,000</td>
                <td>142.500</td>
                <td>14</td>
                <td>256.250</td>
            </tr>
            <tr>
                <td>4</td>
                <td>Poor</td>
                <td>40000</td>
                <td>141.250</td>
                <td>20</td>
                <td>228.125</td>
            </tr>
        </table>
    </p>
</p>