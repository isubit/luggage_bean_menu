<nav role="navigation" class="bean-menu <?php print $bean->field_menu_orientation['und'][0]['value'] ?>">
  <?php if ($bean->title !== ''): ?>
    <p class="bean-menu_title"><?php print $title; ?></p>
  <?php endif ?>

  <?php if ($bean->field_menu_link) :?>
    <ul>
      <?php $items = field_get_items('bean', $bean, 'field_menu_link');
      foreach ($items as $item) {
        echo'<li><a href="' . $item['url'] . '">ITEM</a></li>';
      } ?>
    </ul>
  <?php endif ?>
</nav>