<?php
/**
 * @file
 *  More events, conditions and actions to be used in Rules.
 */

define('RULES_XT_NIGHT_START', 18);
define('RULES_XT_NIGHT_END', 7);

/**
* Implements hook_rules_condition_info().
*/
function rules_xt_rules_condition_info() {
  return array(
    'rules_xt_condition_night' => array(
      'label' => t('Is it night-time?'),
      'help' => t('Evaluates to TRUE if the current time (site timezone) is between 22PM and 7AM.'),
    ),
  );
}

/**
* Calculate how many days ago the supplied node was changed and return TRUE if
* the time passed is less than the supplied number of days.
*/
function rules_xt_condition_night() {
  $current_hour = time('G');
  return $current_hour < RULES_XT_NIGHT_END || $current_hour > RULES_XT_NIGHT_START;
}

