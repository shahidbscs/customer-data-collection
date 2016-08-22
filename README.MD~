# Customer Data Collection
## Introduction
The goal of this assigment is to implement a customer data collection module for Drupal.
The company "Cruiseship" is selling motorboard oil through third-party stores all around the
country. Although they do not have any direct contact with their end customers, they want
to collect e-mail adresses to send out a monthly newsletter to them. Therefore they set up
an incentive for them: attached to each new oil can is a unique 8-character alfanumeric
code. Customers can use the code to participate in a contest on Cruiseship's website, to
win a luxurious 1-week cruise on the Nile. After giving away their precious personal details & e-mail adress of course!

## Guidelines

The module needs to work with Drupal 7 / PHP 5.4 / MySQL 5.1 +.

Use of any contributed modules is NOT allowed, except when mentioned otherwise.

Try to finish as much as you can, in the same order as the needed functionality is described
in this document. However, do not spent too much time on parts of the assignment you do
not know how to solve.
Certain aspects necessary to make the module production-ready are not explicitly described
in the assignment. It's up to the implementer to think about these, while applying best
practices in the following areas:

### Drupal coding standards and naming conventions: 
http://drupal.org/coding-standards.
### security: 
http://drupal.org/writing-secure-code
### Others
internationalization and localization

## Functional requirements
#### Participation in the contest

On the path /participate anonymous visitors can enter a unique contest code, their
first name, last name and a valid e-mail address.
Use the following labels for these input fields: "Contest code", "Your first name",
"Your last name", "Your e-mail address".

All fields are required. If a field is left empty, display the standard validation message
Drupal offers.If an invalid e-mail address is supplied, display this validation message: "Invalid e-mail address {specific-email}", with {specific-email} replaced by the entered address.

The contest code is checked against a list of known codes, stored in a database
table foreseen by the module.

On a fresh install, the following 4 contest codes are added to the list of 
###### known codes:
KKKK6666, TTTT9999, PPPP3333 and FFFF1111

If someone tries to participate with an unknown contest code, display this validation
message: "Unknown code {specific-code}. Please check the entered code, correct
any mistakes and try again." with {specific-code} replaced by the entered code.

Any e-mail adress can only participate once.
If someone tries to participate with a e-mail adress that was used already, display the
following validation message: "You cheater! This e-mail address {specific-email} was
used already." with {specific-email} replaced by the entered address.

A contest code can only be used once
If someone tries to participate with a contest code that was used already, display this
validation message: "You cheater! The code {specific-code} was used already." with
{specific-code} replaced by the entered code.

If validation succeeds, store the personal details in a database table foreseen by the
module. Also store the time of the submission as a UNIX timestamp. Ensure as well
that Cruiseship, if ever needed, can retrieve which contest code was used for a
specific participant.

## Introductory text
Put an introductory text above the input fields in the form on /participate.
This text will need to be changed a couple of times as the contest approaches its end
date. Therefore the editorial team of the website should be able to modify it
themselves. Allow them to do so on the path
##### /admin/config/customer_data_collection.

They can make use of any Drupal text format they have access to.
On a fresh install the introductory text should be "Participate in the contest and win a
luxurious 1-week cruise on the river Nile!", where "luxurious 1-week cruise on the
river Nile" is emphasized.

### Date of birth
Add an additional required field to the form on /participate where visitors need to
enter their date of birth. Use the label "Date of birth"
Use the form element type suitable for dates from Drupal core.

Limit the available birth years to the range [current year - 100] - [current year]

## Closing note

Thanks to your perfect implementation of Cruiseship's requirements, the contest became a
big success. Marketeers claim that in 1 year sales doubled as a result of this campaign.
The additional income was invested in a new eco-friendly department of Cruiseship, that
produces canoes.
