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
SMART Method C++ Code With Object-Oriented Principles<br>

# SMART Method
<details>
    <summary><b>Introduction</b></summary>

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
    <table align="center" border="true">
        <p align="center" id="1.1"><b>(1.1)</b>X<sub>(m,n)</sub>; i = 1,...,m; j = 1,...,n</p>
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
    <table border="true" align="center">
        <p align="center" id="table11"><b>Table 1.1</b> Seven ranking of qualitative attributes</p>
        <tr>
            <td>Poor</td><td>Fairly Weak</td><td>Medium</td><td>Fairly Good</td><td>Good</td><td>Very Good</td><td>Excellent</td>
        </tr>
        <tr>
            <td>4</td><td>5</td><td>6</td><td>7</td><td>8</td><td>9</td><td>10</td>
        </tr>
    </table>
</html>

</details>

<details>
    <summary>Description of SMART Method</summary>

<h3 id="rating-the-attributes">2.1 Rating the Attributes</h3>
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

<h3 id="effective-weight-of-alternatives">2.2 The Effective Weights of Alternatives</h3>
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

<h3 id="normalized-weights">2.3 The Normalized Weights</h3>
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
</details>
<details>

<summary>Case Study</summary>

<p>
    A manufacturer, aiming to produce a car from three different car models (<b>A<sub>1</sub>, A<sub>2</sub> and A<sub>3</sub></b>), expresses the selection interval for the attributes of price (<b>C<sub>1</sub></b>), maximum speed (<b>C<sub>2</sub></b>), acceleration between 0 and 100 (<b>C<sub>3</sub></b>), and the trunk volume of car (<b>C<sub>4</sub></b>) as follows:
    <ul>
        <li><b>Consumer price:</b> 20,000$–40,000$</li>
        <li><b>Maximum speed:</b> 140–220 km/h</li>
        <li><b>Acceleration 0–100:</b> 8–20 s</li>
        <li><b>Trunk volume of car:</b> 200–2000 dm<sup>3</sup></li>
    </ul>
    Further, the attributes are ranked as shown in <a href="#stable12">Table 1.2</a>. The attributes are represented by experts, and the decision matrix is as the matrix of <a href="#sfig11">Fig. 1.1</a>. It is desirable to select the best alternative according to the ranking of attributes by the manufacturer by the SMART method.
</p>

<p>
    <h2>&#9752; Solution</h3>
    <h3>(A) <b>Rating the attributes</b></h3>
    The rating of attributes is as shown in <a href="#stable13">Table 1.3</a>.
    <p>
        <table align="center" border="true">
            <p align="center" id="stable12"><b>(Table 1.2)</b> Ranking the attributes</p>
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
        <table align="center" border="true">
            <p align="center" id="stable13"><b>(Table 1.3)</b> Rating the attributes</p>
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
    <br>
    <h3>(B) <b>The effective weights of alternatives</b></h3>
    <p>
        The effective weight of alternatives is calculated according to the proposed tips and Eq. (<a href="#e1.4">1.4</a>). For example, the effective weight of alternative 1, under the negative price attribute, is computed as follows:
        <p align="center">
            <b><i>g<sub>11</sub> = 10 - log<sub>2</sub><sup>(25000 - 20312.500) / (40000 - 20312.500) * 64</sup> = 6.070</i></b>
        </p>
        The effective weight of alternative 1 under the positive attribute of the maximum speed is determined as follows:
        <p align="center">
            <b><i>g<sub>12</sub> = 4 + log<sub>2</sub><sup>(153 - 141.250) / (220 - 141.500) * 64</sup> = 7.255</i></b>
        </p>
        The effective weight of alternative 1 under the negative attribute of acceleration (the lower the time of reaching a speed of 100 km/h, the machine is better) is calculated as follows:
        <p align="center">
            <b><i>g<sub>13</sub> = 10 - log<sub>2</sub><sup>(15.300 - 8.188) / (20 - 8.188) * 64</sup> = 4.732</i></b>
        </p>
        The effective weight of alternative 1 under the positive attribute of the trunk volume is obtained as follows:
        <p align="center">
            <b><i>g<sub>14</sub> = 4 + log<sub>2</sub><sup>(250 - 228.125) / (2000 - 228.125) * 64</sup> = 3.660</i></b>
        </p>
        Also, the effective weight of other alternatives is according to <a href="#stable14">Table 1.4</a>.
        <p align="center" id="stable14">
            <table border="true">
                <p><b>Table 1.4</b> Effective weight of attributes</p>
                <tr>
                    <td></td>
                    <td>Car 1</td>
                    <td>Car 2</td>
                    <td>Car 3</td>
                </tr>
                <tr>
                    <td>C<sub>1</sub></td>
                    <td>6.070</td>
                    <td>4.634</td>
                    <td>4</td>
                </tr>
                <tr>
                    <td>C<sub>2</sub></td>
                    <td>7.255</td>
                    <td>8.861</td>
                    <td>9.552</td>
                </tr>
                <tr>
                    <td>C<sub>3</sub></td>
                    <td>4.732</td>
                    <td>5.522</td>
                    <td>6.020</td>
                </tr>
                <tr>
                    <td>C<sub>4</sub></td>
                    <td>3.660</td>
                    <td>6.456</td>
                    <td>7.186</td>
                </tr>
            </table>
        </p>
        <p align="center">
            <table border="true">
                <p id="stable15"><b>Table 1.5</b> Normalized weights of attributes</p>
                <tr>
                    <td></td>
                    <td>C<sub>1</sub></td>
                    <td>C<sub>2</sub></td>
                    <td>C<sub>3</sub></td>
                    <td>C<sub>4</sub></td>
                </tr>
                <tr>
                    <td>Value</td>
                    <td>0.475</td>
                    <td>0.119</td>
                    <td>0.238</td>
                    <td>0.168</td>
                </tr>
            </table>
        </p>
    </p>
    <h3>(C) <b>The normalized weights</b></h3>
    <p>
        At first, the normalized weight of four attributes is obtained:
        <ul>
            <li>Weight of the price attribute: (&radic;2)<sup>9</sup> = 22.627</li>
            <li>Weight of the maximum speed attribute: (&radic;2)<sup>5</sup> = 5.657</li>
            <li>Weight of the acceleration attribute: (&radic;2)<sup>7</sup> = 11.314</li>
            <li>Weight of the trunk volume attribute: (&radic;2)<sup>6</sup> = 8</li>
        </ul>
        The normalized weight of attributes is as shown in <a href="#stable15">Table 1.5</a>.
    </p>
    <h3>(D) <b>The final ranking of alternatives</b></h3>
    <p>
        The final weight of the alternatives is determined as follows:
        <p align="center"><b>
        f<sub>1</sub> = (0.475 x 6.070) + (0.119 x 7.255) + (0.238 x 4.732) + (0.168 x 3.660) = 5.488 <br>
        f<sub>2</sub> = (0.475 x 4.634) + (0.119 x 8.861) + (0.238 x 5.522) + (0.168 x 6.456) = 5.654 <br>
        f<sub>3</sub> = (0.475 x 4) + (0.119 x 9.552) + (0.238 x 6.020) + (0.168 x 7.186) = 5.677
        </b></p>
        Therefore, the final ranking is:
        <p align="center"><b>
        A<sub>3</sub> > A<sub>2</sub> > A<sub>1</sub>
        </b></p>
        Accordingly, the car 3 is selected.
    </p>
</p>

</details>
<br>

# Documentation
## SmartMethod
- The base class for creating Alternatives and selecting the best choice
- You will call only this constructor for calculating alternative's rank
## Alternative
- This creates alternative's attributes, getting alternative name and give the attribute base to the real attribute
## Attribute
- This creates attributes and calculating NormalizedWeight(nWeight), EffectiveWeight(effectiveWeight) and Rate of the attributes(rate)
## AttributeRate
- This is calculating the <a href="#rating-the-attributes">Rating the attributes</a>
## EffectiveWeight
- This is calculating the <a href="#effective-weight-of-alternatives">Effective Weight of Alternatives</a>
## NormalizedWeight
- This is calculating the <a href="#normalized-weights">Normalized Weight of Attributes</a>
