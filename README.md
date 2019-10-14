# CapAndTrade

                                    2012/2013 SOUTHERN CALIFORNIA REGIONAL
                                    ACM INTERNATIONAL COLLEGIATE PROGRAMMING CONTEST
                                                  Problem 1
                                                  Cap and Trade
          California Assembly Bill 32, which goes into effect on January 1, 2013, requires companies to reduce
carbon emissions or to pay a fee to offset greenhouse gases. (Technically, the latter is to purchase credits from
businesses that are not emitting their allotment of greenhouse gases.) The allotment goes down each year
until goal numbers are met. For those businesses that do not reduce emissions, annual costs would continue
to rise as the goals are lowered. All businesses, including colleges and universities, could be impacted,
depending on their sizes.
Implementing measures that reduce greenhouse gases can be expensive and take time to implement.
Colleges and universities that are large enough to be impacted by this bill have made estimates of what the
budget impact would be for next year if they do not reduce carbon emissions.
Swamp County College is one of the impacted colleges. It would like to explore what the costs would
be if distributed on a per-unit basis as a fee.
Your team is to write a program that takes assumptions about likely costs and anticipated enrollments
and reports the ranges of fee increases that would be needed to cover the assumed costs. The fee is to be
calculated by credit unit taken and by full-time equivalent student (FTE). The number of units per FTE
will vary by campus.
Input to your program will be one or more lines of text of up to eighty characters. Each line will have
the following information, separated by commas, with no leading white space:
• College or University identifier (string that does not contain a comma)
• Total number of anticipated enrolled units for a year for all anticipated enrollments (90 ≤ units ≤
1,000,000)
• Number of units considered a “full time” load (9 ≤ full-time load ≤ 18)
• Minimum annual assumed cost for emissions (integer dollars)
• Maximum annual assumed cost for emissions (integer dollars)
Output will consist of a single line for each college or university, in the same order as the input, formatted
beginning in the first column of the line as follows:
• College or University identifier, followed by a single space
• The string “Fees per Unit: ”
• The minimum cost per unit, rounded to the nearest dollar with a leading dollar sign, followed by a
hyphen (“-”), followed by the maximum cost per unit, rounded to the nearest dollar, with a leading
dollar sign
• A single space, followed by the string “Full Time: ”
• The minimum cost for a full-time student, rounded to the nearest dollar, with a leading dollar sign,
followed by a hyphen (“-”), followed by the maximum cost per unit, rounded to the nearest dollar, with
a leading dollar sign.
Rounding is to occur after the per-unit and per-FTE values are calculated.
Sample Input
SCC,90000,15,485000,967000
UCX,150000,15,1500000,6000000
Problem 1
Cap and Trade (continued)
Output for the Sample Input
SCC Fees per Unit: $5-$11 Full Time: $81-$161
UCX Fees per Unit: $10-$40 Full Time: $150-$600
